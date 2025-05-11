#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public :
            WrongCat();
            WrongCat(const WrongCat& src);
            WrongCat& operator=(const WrongCat &other);
            ~WrongCat();
            void makeSound() const;
};

#endif