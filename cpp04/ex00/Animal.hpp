/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:09:04 by flaviobiond       #+#    #+#             */
/*   Updated: 2024/03/15 15:42:18 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class   Animal
{
    public:
    Animal();
    Animal(std::string type);
    Animal(Animal const &animal);
    virtual ~Animal();
    void	operator = (Animal const &animal); // operator overload
    std::string	getType(void) const;
    virtual void	makeSound(void) const;
    protected:
		std::string	type;
};

#endif