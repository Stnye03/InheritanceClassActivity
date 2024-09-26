#ifndef _animal_h
#define _

class Animal{

public:	
	std::string name;
	int age;
	std::string type;

	Animal();
	~Animal();
	void displayInfo(){};
	std::string getType(std::string type){};
};


class Dog : public Animal {
std::string breed;
Dog();

virtual displayInfo(std::string breed);
};

class Cat : public Animal{
std::string breed;
Cat();

virtual displayInfo(std::string breed);
};

#endif
