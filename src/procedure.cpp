#include "procedure.h"
#include <math.h>

int diskcheck(float D)
{
	if (D == 0) {
		return 0;
	}
	if (D < 0) {
		return 1;
	}
	if (D > 0) {
		return 2;
	}
	return 0;
}

float diskr(float a,float b,float c)
{
	float D = b * b - 4 * a * c;
	return D;
}

float koren(float D,float a,float b,float c, int s)
{
	float x;
	x = ((-1) * b + sqrt(D) * s) / (2 * a);
	return x;
}
