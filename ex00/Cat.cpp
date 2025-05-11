#include "Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout<<"Cat default constructor called" <<std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &src): Animal(src)
{

}

Cat& Cat::operator=(const Cat& other)
{
    Animal::operator=(other);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout<< "Meow Meow !"<<std::endl;  
}

Cat::~Cat()
{
    std::cout<<"Cat destructor called"<< std::endl;
}