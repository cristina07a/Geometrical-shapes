#include "CPunct.h"

CPunct::CPunct(float x, float y)
{
	this->x = x;
	this->y = y;
}

CPunct::CPunct()
{
	this->x = 0;
	this->y = 0;
}

float CPunct::GetAbscisa()
{
	return this->x;
}
float CPunct::GetOrdonata()
{
	return this->y;
}