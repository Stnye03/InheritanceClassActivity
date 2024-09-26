#ifndef _animal_h
#define _

class Animal{

public:	
	std::string name;
	int age;
	std::string aniType;

	Animal();
	virtual ~Animal();
	void displayInfo()
	std::string getType()
}