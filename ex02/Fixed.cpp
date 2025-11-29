/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:58:37 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/29 09:22:24 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.h"

const int Fixed::fractional_bits = 8;

Fixed::Fixed(): value(0) {
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
    {
        this->value = other.value;
    }
    return *this;
}

Fixed::~Fixed() 
{}


Fixed::Fixed(const int value)
{
    this->value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
    this->value = roundf(value * (1 << fractional_bits));
}

float Fixed::toFloat( void ) const
{
    return (float)value / (1 << fractional_bits);
}

int     Fixed::toInt(void) const
{
    return value >> fractional_bits;
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
    result.value = (long long)(this->value * obj.value) / (1 << fractional_bits);
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

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat();
    return out;
}