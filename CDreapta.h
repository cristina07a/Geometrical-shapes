#pragma once
#include "CPunct.h"

class CDreapta :public CPunct
{
public:
	CDreapta(float x, float y, float z, float w);
	CDreapta();
	~CDreapta() {}
	void SetLungime(CPunct a, CPunct b);
	float GetLungime();

private:
	CPunct a;
	CPunct b;
	float lungime;
};
