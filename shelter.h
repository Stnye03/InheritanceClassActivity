#ifndef SHELTER_H
#define SHELTER_H

#include <vector>
#include <string>
#include "animal.h"

class Shelter {
private:
    std::vector<Animal*> animals;

public:
    void addAnimal(Animal* animal);

    void removeAnimal(std::string name);

    void displayAnimals();

    ~Shelter();
};

#endif