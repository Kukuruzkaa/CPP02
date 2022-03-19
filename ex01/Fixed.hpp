/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:35:27 by ddiakova          #+#    #+#             */
/*   Updated: 2022/03/19 21:54:03 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>
#include <cmath>

class	Fixed {
	
	public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed & operator=(Fixed const & src);
	
	int		getRawBits(void) const;
	void 	setRawBits(int const raw);
	float 	toFloat(void) const;
	int		toInt(void) const;
	
	private:
		int		 			_value;
		static int const    _rawBits;
};

std::ostream &	operator << (std::ostream & o, Fixed const & rhs);

#endif