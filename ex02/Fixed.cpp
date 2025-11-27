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
    this->value = temp.value;
    temp.value++;
    return temp;
}