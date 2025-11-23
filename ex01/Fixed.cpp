/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:15:51 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/23 16:41:28 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const  int Fixed::fractional_bits = 8;

Fixed::Fixed(void) : value(0)
{
        std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : value(value)
{
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
}
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.value;
}

Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->value = other.value;
    return *this;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

int     Fixed::getRawBits(void ) const
{
        std::cout << "getRawBIts member function called" << std::endl;
        return this->value;
}

float   Fixed::toFloat( void ) const
{
        // std::cout <<"toFloat member function called"
}


Fixed::Fixed(const float value) 
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value *(1 << fractional_bits));
}