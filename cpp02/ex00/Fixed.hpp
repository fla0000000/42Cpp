/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:00:53 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/12/29 17:22:15 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <string>

class Fixed {
	public:
		Fixed(int value = 0);
		Fixed(Fixed& obj);
		~Fixed(void);
		Fixed& operator=(Fixed& obj);

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	_value;
		static const int _bits = 8;
};