#include "triangle.h"
int Triangle::getA() {
	return a;
}
void Triangle::setB(int a) {
	this->a=a > 0 ? a : 1;
}
int Triangle::getB() {
	return b;
}
void Triangle::setB(int b) {
	this->b=b > 0 ? b : 1;
}

double Triangle::caculatePerimeter() {
	return a + b + sqrt(a * a * +b * b);
}
double Triangle::caculateSquare() {
	return a * b;
}
string Triangle::description() {
	return "this is TRIANGLE!";
}