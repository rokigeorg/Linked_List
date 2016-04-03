#pragma once
class CPunkt
{
public:
	CPunkt(void);
	~CPunkt(void);
private:
	double x;
	double y;
	CPunkt *next;
public:
	CPunkt(double _x, double _y);
	double getX(void);
	double getY(void);
	CPunkt *getNext(void);
	void setNext(CPunkt * _next);
	void setX(double _x);
	void setY(double _y);
};

