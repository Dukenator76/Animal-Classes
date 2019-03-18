#pragma once
#ifndef Dog_h
#define Dog_h
#include "Animal.h"
#include <string>
using namespace std;
class Dog : public Animal {
public:
	Dog();
	void fetch();
	void makeNoise();
	void eat();
private:
	string noise;
	string food;
};
#endif // !Dog_h
