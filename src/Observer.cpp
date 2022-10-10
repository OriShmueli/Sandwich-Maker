// 
// 
// 

#include "Observer.h"

Observer::Observer(int echoPin, int trigPin)
{
	m_echoPin = echoPin;
	m_trigPin = trigPin;
}

Observer::~Observer()
{
}

void Observer::init()
{
	pinMode(m_trigPin, OUTPUT);
	pinMode(m_echoPin, INPUT);
}

void Observer::Update()
{
	digitalWrite(m_trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(m_trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(m_trigPin, LOW);

	m_duration = pulseIn(m_echoPin, HIGH);
	m_distance = m_duration * 0.034 / 2;
	
	if (m_distance <= m_minDistance) {
		IsOccupied = true;
	}
	else {
		IsOccupied = false;
	}

	//need Distance
}

