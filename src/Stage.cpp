// 
// 
// 

#include "Stage.h"

Stage::Stage(Component* component, Observer* observer)
{
	m_component = component;
	m_observer = observer;
}

Stage::~Stage()
{
}

void Stage::Init()
{
	m_observer->init();
	m_component->Init();
}

void Stage::Update()
{
	m_observer->Update();
	while (!m_observer->IsOccupied)
	{
		m_observer->Update();
	}
	
	m_component->Start();

	while (m_component->IsFinished)
	{
		m_component->Update();
	}
}
