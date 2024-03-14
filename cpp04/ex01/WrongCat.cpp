/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 22:20:42 by flaviobiond       #+#    #+#             */
/*   Updated: 2024/03/13 16:13:19 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
    std::cout << "WrongCat Default Costructor Called" << std::endl;
    return ;
}

WrongCat::WrongCat (WrongCat const &wrongcat): WrongAnimal(wrongcat)
{
    std::cout << "WrongCat Copy Costructor Called" << std::endl;
    *this = wrongcat;
    return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Default Distructor Called" << std::endl;
    return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << " ha fatto miaowwwwww!" << std::endl;
	return ;
}

WrongCat&  WrongCat::operator=(WrongCat const &dog)
{
    if(this != &dog)
    {
        std::cout << dog.getType() << " in operator =" << std::endl;
        this->type = dog.getType();
    }
    return *(this);
}