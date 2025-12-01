
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 09:52:15 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/29 18:00:18 by oait-si-         ###   ########.fr       */
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
		            Fixed& operator++(); // it should return a reference for this case ++(++a)
		            Fixed& operator--();
		        // post-increment Operators
		            Fixed operator++(int);  /*
                                                We need to save the old value BEFORE incrementing
                                                temp is a local variable that exists only in this function
                                                Once the function ends, temp is destroyed!
                                                We CANNOT return a reference to temp because it will be destroyed
                                                So we return a copy of temp instead
                                            */
		            Fixed operator--(int);
                //the four ov func 
                    static Fixed& min(Fixed& a, Fixed& b);
                    static const Fixed& min(const Fixed& a, const Fixed& b);
                    static Fixed& max(Fixed& a, Fixed& b);
                    static const Fixed& max(const Fixed& a, const Fixed& b);
            Fixed& operator=(const Fixed& other); // Copy assignment operator
            void    setRawBits(int const raw);
            int     getRawBits( void ) const ;
            float toFloat( void ) const ;
            int     toInt( void ) const ; // that converts the fd point value to an int value
            ~Fixed();
};



std::ostream& operator<<(std ::ostream& out, const Fixed& obj);

#endif


