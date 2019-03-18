#include "pch.h"
#include "Cat.h"
#include <iostream>
#include <string>
using namespace std;
Cat::Cat() {
	cout << "Derived Class" << endl;
	food = "Fish";
	noise = "Meow";
}

void Cat::makeNoise()
{
	cout << "Meow!" << endl;
}

void Cat::eat()
{
	cout << "The cat eats a fish." << endl;
}

void Cat::play()
{
	cout << "The cat plays with you. " << endl;
}