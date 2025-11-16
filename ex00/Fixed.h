/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:20:24 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/16 12:42:30 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int value;
        static const int fractional_bit;
    public:
        Fixed(); // d constructor  
        Fixed(const Fixed& other); // cp contructor 
        Fixed& operator=(const Fixed& other);   // assignemnt constructor 
        ~Fixed(); // destruc
        void getRawBits(void) const;
        void setRawBits(int const raw);
};



#endif 