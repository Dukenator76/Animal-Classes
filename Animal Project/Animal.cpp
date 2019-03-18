#include "pch.h"
#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal() {
	cout << "Default Animal Constructor" << endl;
	weight = 0;
	height = 0;
}
void Animal::eat()
{
	cout << "animals eat all kinds of foods!" << endl;
}

double Animal::getHeight() const
{
	return height;
}
double Animal::getWeight() const
{
	return weight;
}
void Animal::setHeight(double h)
{
	height = h;
}
void Animal::setWeight(double w)
{
	weight = w;
}
