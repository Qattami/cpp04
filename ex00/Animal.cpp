#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< "Default constructor called " << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &src)
{
    type = src.type;
}

Animal& Animal::operator=(const Animal &other)
{
    if(this != &other)
    {
        type = other.type;
    }
    return (*this);
}

Animal ::~Animal()
{
    std::cout << "Destructor is called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "No sound" << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}