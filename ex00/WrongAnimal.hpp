#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
 protected :
                std::string type;
    public    :
                WrongAnimal();
                WrongAnimal(const WrongAnimal &src);
                WrongAnimal& operator=(const WrongAnimal &other);
                virtual ~WrongAnimal();
                virtual void makeSound() const;
                std::string getType() const;
};


#endif