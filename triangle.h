#pragma once
#include "figure.h"
class Triangle : public Figure
{
private:
	int a;
	int b;
public:
	Triangle() :a(1),b(1){}
	Triangle(int a, int b) :a(a > 0 ? a : 1), b(b > 0 ? b : 1) {}

	double caculatePerimeter();
	double caculateSquare();
	string description();

	int getA();
	int setA(int a);
	int getB();
	int setB(int b);

	};