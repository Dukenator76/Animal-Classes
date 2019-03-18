#include "pch.h"
#include "Cow.h"
#include <iostream>
#include <string>
using namespace std;

Cow::Cow() {
	cout << "Derived Class" << endl;
	noise = "Moooo";
	food = "Grass";
	
}

void Cow::makeNoise()
{
	cout << "Moooo!" << endl;
}

void Cow::eat()
{
	cout << "The cow eats grass." << endl;
}