/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:58:37 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/27 18:51:41 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.h"



const int Fixed::fractional_bits = 8;

Fixed::Fixed(): value(0) {}

Fixed::Fixed(const int value)
{
    this->value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
    this->value = roundf(value * (1 << fractional_bits));
}

            // void    setRawBits(int const raw);
            // int     getRawBits( void ) const ;
            // float toFloat( void ) const ;
            // int     toInt( void ) const ; 

float Fixed::toFloat( void ) const
{
    
}

Fixed Fixed::operator+(const Fixed& obj) const
{
    Fixed result;
    result.value = this->value + obj.value;
    return result;
}

Fixed Fixed::operator-(const Fixed& obj) const
{
    Fixed result;
    result.value = this->value - obj.value;
    return result;
}

Fixed Fixed::operator*(const Fixed& obj) const
{
    Fixed result;
    result.value = (this->value * obj.value) / (1 << fractional_bits);
    return result;
}

Fixed Fixed::operator/(const Fixed& obj) const
{
    Fixed result;
    result.value = (this->value * (1 << fractional_bits)) / obj.value;
    return result;
}


bool Fixed::operator!=(const Fixed& obj) const 
{
    return(this->value != obj.value);
}

bool Fixed::operator<=(const Fixed& obj) const
{
    return(this->value <= obj.value);
}
bool Fixed::operator>=(const Fixed& obj) const
{
    return(this->value >= obj.value);
}
bool Fixed::operator==(const Fixed& obj) const
{
    return(this->value == obj.value);
}

bool Fixed::operator<(const Fixed& obj) const 
{
    return(this->value < obj.value);
}

bool Fixed::operator>(const Fixed& obj) const 
{
    return(this->value > obj.value);
}

Fixed& Fixed::operator++()
{
    this->value++;
    return(*this);
}

Fixed& Fixed::operator--()
{
    this->value--;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp;
    temp.value = this->value;
    this->value++;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp;
    temp.value = this->value;
    this->value--;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if(a.value < b.value)
        return a;
    else 
        return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
        if(a.value > b.value)
        return a;
    else 
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if(a.value > b.value)
        return a;
    else 
        return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
        if(a.value < b.value)
        return a;
    else 
        return b;
}