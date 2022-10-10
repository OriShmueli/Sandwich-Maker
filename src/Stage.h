// Stage.h

#ifndef _STAGE_h
#define _STAGE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

	class Stage
	{
	public:
		Stage(Component* component, Observer* observer);
		~Stage();
		void Init();
		void Update();
	private:
		Component* m_component;
		Observer* m_observer;
	};

#endif

