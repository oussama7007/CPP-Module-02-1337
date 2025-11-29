/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 09:27:03 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/29 10:00:58 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef POINT_CPP
#define POINT_CPP

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point(); // default constructor
        Point(const Point& other); // cp constructor
        Point()
        Point& operator=(const Point& other); // cp assignement
        ~Point(); // destructor;
};
  

#endif 