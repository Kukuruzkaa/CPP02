/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:17:52 by ddiakova          #+#    #+#             */
/*   Updated: 2022/03/19 15:15:05 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>

class	Fixed {

	public:
	
		Fixed(void);
		// Fixed(int const n);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &		operator=(Fixed const & rhs);
		
		int		getRawBits(void) const;
		void 	setRawBits(int const raw);

	private:
	
		int			_value;
		static int 	_rawBits;
};

std::ostream &	operator << (std::ostream & o, Fixed const & i);

#endif