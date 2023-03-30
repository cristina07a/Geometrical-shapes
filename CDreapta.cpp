#include "CDreapta.h"
#include <cmath>

CDreapta::CDreapta(float x,float y,float z,float w)
{
	a = CPunct(x,y);
	b = CPunct(z,w);
	SetLungime(a,b);
}

CDreapta::CDreapta()
{
	CPunct(0,0);
	CPunct(0,0);
	this->lungime = 0;
}

void CDreapta::SetLungime(CPunct a,CPunct b)
{
	this->lungime = sqrt((b.GetAbscisa() - a.GetAbscisa()) * (b.GetAbscisa() - a.GetAbscisa()) + (b.GetOrdonata() - a.GetOrdonata()) * (b.GetOrdonata() * a.GetOrdonata()));
}

float CDreapta::GetLungime()
{
	return this->lungime;
}