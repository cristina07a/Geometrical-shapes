#pragma once

class CPunct
{
public:
	CPunct();
	CPunct(float x, float y);
	~CPunct() {}
	float GetAbscisa();
	float GetOrdonata();
protected:
	float x; //abscisa
	float y; //ordonata
};