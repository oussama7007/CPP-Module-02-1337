/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:59:26 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/26 15:37:13 by oait-si-         ###   ########.fr       */
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
            // operation overloading
                //arithmitic opratores 
                        Fixed  operator+(const Fixed& obj) const;
                        Fixed  operator-(const Fixed& obj) const;
                        Fixed operator*(const Fixed& obj) const;
                        Fixed  operator/(const Fixed& obj) const;
                //Comparison operators
                        bool operator>(const Fixed& obj)    const;
                        bool operator<(const Fixed& obj)    const;
                        bool operator>=(const Fixed& obj)   const;
                        bool operator<=(const Fixed& obj)   const;
                        bool operator==(const Fixed& obj)   const;
                        bool operator!=(const Fixed& obj)   const;

                // pre-increment Operators
		            Fixed operator++();
		            Fixed operator--();
		        // post-increment Operators
		            Fixed operator++(int);
		            Fixed operator--(int);
            Fixed& operator=(const Fixed& other); // Copy assignment operator
            void    setRawBits(int const raw);
            int     getRawBits( void ) const ;
            float toFloat( void ) const ;
            int     toInt( void ) const ; // that converts the fd point value to an int value
            ~Fixed();
};

std::ostream& operator<<(std ::ostream& out, const Fixed& obj);


#endif