#pragma once
class Animal
{
public:
	
	Animal();
	virtual void makeNoise() = 0;
	virtual void eat();
	double getHeight() const;
	double getWeight() const;
	void setHeight(double h);
	void setWeight(double w);

private:
	double weight;
	double height;
};





