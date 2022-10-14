// TestServoComponent.h

#ifndef _TESTSERVOCOMPONENT_h
#define _TESTSERVOCOMPONENT_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

	class TestServoComponent : public Component
	{
	public:
		
		TestServoComponent(int pin);
		~TestServoComponent();
		void Init();
		void Update();
	private:
		int m_pin;
	};


#endif

