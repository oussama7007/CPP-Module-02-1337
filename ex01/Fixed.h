/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:16:02 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/18 14:28:54 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>



class Fixed 
{
        private:
            const int value;
            const static int fractional_bits;
        public:
            Fixed(const int value); // to converts it to the corresponding fixed-point value.
            Fixed(const float value); // to converts it to corresponding fixed point value 
            float toFloat( void ) const ;
            int toInt( void ) const ;
}


#endif 