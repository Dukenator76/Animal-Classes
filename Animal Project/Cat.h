#pragma once
#ifndef Cat_h
#define Cat_h
#include <iostream>
#include "Animal.h"
#include <string>
using namespace std;

class Cat : public Animal {
public:
	Cat();
	void play();
	void makeNoise();
	void eat();
private:
	string food;
	string noise;
};
#endif // !Cat_h
