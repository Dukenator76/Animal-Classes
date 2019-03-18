#include "pch.h"
#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog() {
	cout << "Derived Class" << endl;
	food = "Ground Beef";
	noise = "wooof";
}

void Dog::makeNoise()
{
	cout << "Woof!" << endl;
}

void Dog::eat()
{
	cout << "The dog eats hamburger." << endl;
}

void Dog::fetch()
{
	cout << "The dog fetches a ball. " << endl;
}