// 
// 
// 

#include "Component.h"

Component::Component()
{
}

Component::~Component()
{
}

void Component::Start()
{
	IsActivated = true;
}

void Component::Stop()
{
}

void Component::Init()
{
}

void Component::Update()
{
	IsActivated = false;
}


