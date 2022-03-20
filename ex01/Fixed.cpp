/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:57:20 by ddiakova          #+#    #+#             */
/*   Updated: 2022/03/20 12:37:35 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) :_value(n << _rawBits) {
	
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _value(roundf(f * (1 << _rawBits))) {

	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

	std::cout << "Copy assignement operator called"<< std::endl;

	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

const int	Fixed::_rawBits = 8;

int			Fixed::getRawBits(void) const {

	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	
	this->_value = raw;
}
	
int		Fixed::toInt(void) const {

	return (this->getRawBits() >> _rawBits);
}

float	Fixed::toFloat(void) const {

	return ((float)this->getRawBits() / (1 << _rawBits)); 
}

std::ostream &operator << (std::ostream & o, Fixed const & rhs) {
	
	o << rhs.toFloat();
	return o;
}