#include"WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout<<"WrongCat default constructor called" <<std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal(src)
{

}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    WrongAnimal::operator=(other);
    return (*this);
}

void WrongCat::makeSound()const
{
    std::cout<< "Meow Meow !"<<std::endl;  
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat destructor called"<< std::endl;
}