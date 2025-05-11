#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout<<"Dog default constructor called" <<std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& src): Animal(src)
{

}

Dog& Dog::operator=(const Dog &other)
{
    Animal::operator=(other);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout<< "Woof woof!"<<std::endl;  
}

Dog::~Dog()
{
    std::cout<<"Dog destructor called"<< std::endl;
}