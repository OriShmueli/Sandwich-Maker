// Component.h

#ifndef _COMPONENT_h
#define _COMPONENT_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Component
{
public:

	Component();
	~Component();
	virtual void Start();
	virtual void Stop();
	virtual void Init();
	virtual void Update();
	bool IsActivated = false;
	bool IsFinished = false;

private:
	
};


#endif

