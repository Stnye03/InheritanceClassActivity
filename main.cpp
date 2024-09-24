#include <iostream>
#include "animal.h"
#include "shelter.h"

void displayMenu() {
    std::cout << "1. Add Dog\n2. Add Cat\n3. Remove Animal by Name\n4. Display All Animals\n5. Exit\n";
}

std::string getInput(const std::string& prompt) {
    std::string input;
    std::cout << prompt;
    std::cin >> input;
    return input;
}

Animal* animal = nullptr;
    if (type == "Dog") {
        animal = Dog(name, age, breed);
    } else if (type == "Cat") {
        animal = Cat(name, age, breed);
    }
}



int main() {
    Shelter shelter;
    int choice;

    while (true) {
        displayMenu();
        choice = std::stoi(getInput("Choose an option: "));

        if (choice == 1) {
            addAnimalToShelter(shelter, "Dog");
        } else if (choice == 2) {
            addAnimalToShelter(shelter, "Cat");
        } else if (choice == 3) {
            shelter.removeAnimal(getInput("Enter the name of the animal to remove: "));
        } else if (choice == 4) {
            shelter.displayAnimals();
        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Not an option, try again.\n";
        }
    }

    return 0;
}
