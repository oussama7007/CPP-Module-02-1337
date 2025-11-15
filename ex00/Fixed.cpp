/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:16:52 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/15 16:20:26 by oait-si-         ###   ########.fr       */
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
        this->value = other.value 
}