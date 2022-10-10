// Observer.h

#ifndef _OBSERVER_h
#define _OBSERVER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

	class Observer
	{
	public:
		Observer(int echoPin, int trigPin);
		~Observer();
		virtual void init();
		virtual void Update();
		bool IsOccupied = false;

	private:
		long m_duration;
		int m_distance;
		int m_echoPin;
		int m_trigPin;
		int m_minDistance = 10;
	};


#endif

