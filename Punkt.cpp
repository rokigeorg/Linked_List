//#include "StdAfx.h"
#include <stddef.h>
#include "Punkt.h"


CPunkt::CPunkt(void)
: x(0), y(0)
, next(NULL)
{}


CPunkt::~CPunkt(void)
{}


CPunkt::CPunkt(double _x, double _y)
: x(_x), y(_y), next(NULL)
{}


double CPunkt::getX(void) {
	return x;
}


double CPunkt::getY(void) {
	return y;
}


void CPunkt::setX(double _x) {
	x = _x;
}
void CPunkt::setY(double _y) {
	y = _y;
}

CPunkt * CPunkt::getNext(void) {
	return next;
}


void CPunkt::setNext(CPunkt * _next) {
	next = _next;
}
