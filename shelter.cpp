#include <vector>
#include <string>
#include <iostream>
#include "animal.h"

class Shelter {
private:
    std::vector<Animal*> animals;

public:
    void addAnimal(Animal* animal) {
        animals.push_back(animal);
    }

    void removeAnimal(std::string name) {
        for (auto it = animals.begin(); it != animals.end(); ++it) {
            if ((*it)->getName() == name) {
                delete *it;
                animals.erase(it);
                std::cout << "Animal " << name << " was removed from the shelter.\n";
                return;
            }
        }
        std::cout << "Animal " << name << " not found in the shelter.\n";
    }

    void displayAnimals() {
        if (animals.empty()) {
            std::cout << "The shelter is currently empty.\n";
            return;
        }

        std::cout << "Animals in the shelter:\n";
        for (const auto& animal : animals) {
            animal->displayInfo();
            std::cout << "------------------------\n";
        }
    }

    ~Shelter() {
        for (auto animal : animals) {
            delete animal;
        }
    }
};