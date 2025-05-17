#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< "Default constructor called " << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    type = src.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    if(this != &other)
    {
        type = other.type;
    }
    return (*this);
}

WrongAnimal ::~WrongAnimal()
{
    std::cout << "Destructor is called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "No sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(type);
}