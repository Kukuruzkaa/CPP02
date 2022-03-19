/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:17:58 by ddiakova          #+#    #+#             */
/*   Updated: 2022/03/19 21:53:45 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {

	std::cout << "Default constructor called" << std::endl;
}

// Fixed::Fixed(int const n) : _value(n) {

// 	std::cout << "Parametric constructor called" << std::endl;
// }

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" <<std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int		Fixed::_rawBits = 8;

int		Fixed::getRawBits(void) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {

	this->_value = raw;
}

std::ostream &operator << (std::ostream & o, Fixed const & rhs) {
	
	o << "The value of _value is : " << rhs.getRawBits();
	return o;
}

