#pragma once
#ifndef Cow_h
#define Cow_h
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Cow : public Animal {
public:
	Cow();
	
	void makeNoise();
	void eat();
private:
	string food;
	string noise;
};
#endif // !Cow_h