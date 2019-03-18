

#include "pch.h"
#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include <vector>


using namespace std;
int main()
{

	Dog Buster;
	Cat Maverick;
	Cow Jeff;
	
	Dog *dptr = &Buster;
	Cat *cptr = &Maverick;
	Cow *cowptr = &Jeff;
	Animal *aptr;
	aptr = &Buster;
	Animal *aptr2;
	aptr2 = &Maverick;

	vector<Animal*> animal;
	animal.push_back(dptr);
	animal.push_back(cptr);
	animal.push_back(cowptr);

	for (int i = 0; i < 3; i++) {
		animal[i]->makeNoise();
		animal[i]->eat();
	}

	dptr = dynamic_cast<Dog *>(aptr);
	if (dptr != nullptr)
		dptr->fetch();
	
	cptr = dynamic_cast<Cat *>(aptr2);
	if (cptr != nullptr)
		cptr->play();

	
	
}


