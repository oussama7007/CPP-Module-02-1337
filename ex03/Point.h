/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:36:10 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/29 17:36:29 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.h"

class Point
{
    private:
        Fixed const x;
        Fixed const y;

    public:
        // Orthodox Canonical Form
        Point();                                    // Default Constructor
        Point(const Point& other);                  // Copy Constructor
        Point& operator=(const Point& other);       // Copy Assignment Operator
        ~Point();                                   // Destructor

        // Constructor required by subject
        Point(const float x, const float y);

        // Getters (Necessary to access private x/y in bsp.cpp)
        Fixed getX() const;
        Fixed getY() const;
};

// BSP Function Prototype
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif