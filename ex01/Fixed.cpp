/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:15:51 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/18 20:24:45 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const  int Fixed::fractional_bits = 8;

Fixed::Fixed( void) : value(0)
{
        std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
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
