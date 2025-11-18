/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:33:10 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/16 19:25:07 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Fixed.h"

int main( void ) {
    Fixed a , d;
    Fixed b( a );
    Fixed c;
    c = b ;
    a = b = c;
    Fixed x;
    
    Fixed y(x);
    y.setRawBits(100);
    x.setRawBits(42);
    std::cout << y.getRawBits() << std::endl;
    std::cout << std::endl;
    std::cout << a.getRawBits() <<"\n"<< std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

        return 0;
}