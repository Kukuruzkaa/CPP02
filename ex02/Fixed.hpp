/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:35:27 by ddiakova          #+#    #+#             */
/*   Updated: 2022/03/20 00:15:51 by ddiakova         ###   ########.fr       */
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
	Fixed	operator+(Fixed const & src);
	Fixed	operator-(Fixed const & src);
	Fixed	operator*(Fixed const & src);
	Fixed	operator/(Fixed const & src);
	Fixed & operator++();	
	Fixed	operator++(int);
	Fixed & operator--();
	Fixed 	operator--(int);
	bool	operator<(Fixed const & src) const;
	bool	operator>(Fixed const & src) const;
	bool	operator<=(Fixed const & src) const;
	bool	operator>=(Fixed const & src) const;
	bool	operator==(Fixed const & src) const;
	bool	operator!=(Fixed const & src) const;
	
	
	int				getRawBits(void) const;
	void 			setRawBits(int const raw);
	float 			toFloat(void) const;
	int				toInt(void) const;
	static 			Fixed & min(Fixed & float1, Fixed & float2);
	const static 	Fixed & min(Fixed const & float1, Fixed const & float2);
	static			Fixed & max(Fixed & float1, Fixed & float2);
	const static	Fixed & max(Fixed const & float1, Fixed const & float2);
	
	private:
		int		 			_value;
		static int const    _rawBits;
};

std::ostream &	operator << (std::ostream & o, Fixed const & rhs);

#endif