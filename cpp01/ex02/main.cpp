/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:18:17 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/12/27 14:44:41 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

// • stringPTR: A pointer to the string.
// • stringREF: A reference to the string
int main()
{
    std::string flv = "FLAVIO";
    std::string* stringPTR = &flv;
    std::string& stringREF = flv;
    
    std::cout << "flv = " << flv << std::endl; 
    std::cout << "indirizzo flv = " << &flv << std::endl; 
      std::cout << "stringPTR  = " << *stringPTR << std::endl; 
     std::cout << "indirizzo stringPTR = " << stringPTR << std::endl; 
      std::cout << "stringREF = " << stringREF << std::endl; 
     std::cout << "indirizzo stringREF = " << &stringREF << std::endl; 
}