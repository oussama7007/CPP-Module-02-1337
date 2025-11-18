/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:16:52 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/18 12:45:22 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"


const int Fixed::fractional_bit = 8;

Fixed::Fixed() : value(0)
{
        std::cout << "Default constructor called" << std::endl;
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

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
        std::cout << "getRawBits member function called" << std::endl;
        return this->value;
}

void    Fixed::setRawBits(int const raw)
{
        std::cout << "setRawBits member function called" << std::endl;
        this->value = raw;
}