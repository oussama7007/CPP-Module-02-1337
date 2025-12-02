/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:16:02 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/02 13:26:02 by oait-si-         ###   ########.fr       */
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
            Fixed(void); 
            Fixed(const int value); 
            Fixed(const float value); 
            Fixed(const Fixed& other); 
            
            Fixed& operator=(const Fixed& other); 
            void    setRawBits(int const raw);
            int     getRawBits( void ) const ;
            float toFloat( void ) const ;
            int     toInt( void ) const ; 
            ~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);
#endif 



