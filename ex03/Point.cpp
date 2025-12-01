/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:30:30 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/29 17:51:21 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

// Default Constructor: Initialize x and y to 0
Point::Point() : x(0), y(0) {
}

// Float Constructor: Initialize x and y with values
Point::Point(const float xVal, const float yVal) : x(xVal), y(yVal) {
}

// Copy Constructor: Initialize from another Point
Point::Point(const Point& other) : x(other.x), y(other.y) {
}

// Assignment Operator
// TRICKY: Since x and y are const, we cannot assign to them!
// We essentially do nothing, but we must return *this to follow the standard.
Point& Point::operator=(const Point& other) {
    (void)other; // unused parameter cast to avoid compiler warnings
    return *this;
}

// Destructor
Point::~Point() {
}

// Getters
Fixed Point::getX() const {
    return this->x;
}

Fixed Point::getY() const {
    return this->y;
}