#ifndef _animal_h
#define _animal_h

#include <string>

class Animal{

public:	
	std::string name;
	int age;
	std::string breed;

	Animal();
	~Animal();
	virtual void displayInfo(std::string name, int age, std::string breed){};
	std::string getType(std::string breed){};
};


class Dog : public Animal {
std::string breed;
Dog(std::string name, int age, std::string breed);

virtual displayInfo(std::string breed);
};

class Cat : public Animal{
std::string breed;
Cat(std::string name, int age, std::string breed);

virtual displayInfo(std::string breed);
};
