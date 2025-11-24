/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:16:02 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/24 17:25:09 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>


class Fixed
{
        private:
            int value;
            const static int fractional_bits;
        public:
            Fixed(void); // default constructor
            Fixed(const int value); // to converts it to the corresponding fixed-point value.
            Fixed(const float value); // to converts it to corresponding fixed point value
            Fixed(const Fixed& other); // copy constructor 
            std::ostream& operator<<(std::ostream& out, const Fixed& obj);   // operation overloading 
            Fixed& operator=(const Fixed& other); // Copy assignment operator
            void    setRawBits(int const raw);
            int     getRawBits( void ) const ;
            float toFloat( void ) const ;
            int     toInt( void ) const ; // that converts the fd point value to an int value
            ~Fixed();
};


#endif 