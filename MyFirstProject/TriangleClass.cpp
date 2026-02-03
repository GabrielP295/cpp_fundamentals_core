#include "TriangleClass.h"
class TrinagleClass {
	Triangle::Triangle(double base, double height) {
		this->base = base;
		this->height = height;
	}
	double getBase() {
		return this->base;
	}
	double getHeight() {
		return this->heigth;
	}
	void setBase(double newBase) {
		this->base = newBase;
	}
	void setHeight(double newHeight) {
		this->height = newHeight;
	}
	double calculateArea() {
		return this->height * this->base * 0.5;
	}
};