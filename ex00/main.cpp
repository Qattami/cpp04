#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
    std::cout << "=== Basic Tests ===" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Animal type: " << meta->getType() << std::endl;
    std::cout << "Dog type: " << j->getType() << std::endl;
    std::cout << "Cat type: " << i->getType() << std::endl;

    meta->makeSound();
    j->makeSound();
    i->makeSound();

    // delete meta;
    // delete j;
    // delete i;

    std::cout << "=== WrongAnimal and WrongCat Tests ===" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "WrongAnimal type: " << wrongMeta->getType() << std::endl;
    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;

    wrongMeta->makeSound();
    wrongCat->makeSound(); 

    // delete wrongMeta;
    // delete wrongCat;
    return 0;
}