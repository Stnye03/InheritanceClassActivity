#include <iostream>
#include <string>
#include <"animal.h">

void displayInfo(): public Animal {
		std::string name;
		int age;
		std::string type;

		std::string dispstrinfo = name + ", " + type;
		std::cout<<dispstrinfo<<" "<< age <<std::endl;

	};
