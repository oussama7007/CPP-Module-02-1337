/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 09:52:17 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/29 09:52:18 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"


int main()
{
    Point a(1,1);
    Point b(3, 1);
    Point c(1, 2);

    Point p1(1.5, 1.5);
    if(bsp(a, b, c, p1))
        std::cout << "Point (2, 2) is INSIDE the triangle." << std::endl;
    else
        std::cout << "Point (2, 2) is OUTSIDE the triangle." << std::endl;

    // Test 2: Point Outside (10, 10)
    Point p2(10, 10);
    if (bsp(a, b, c, p2))
        std::cout << "Point (10, 10) is INSIDE the triangle." << std::endl;
    else
        std::cout << "Point (10, 10) is OUTSIDE the triangle." << std::endl;

    // Test 3: Point on Edge (5, 0) - Should be FALSE
    Point p3(5, 0);
    if (bsp(a, b, c, p3))
        std::cout << "Point (5, 0) is INSIDE the triangle." << std::endl;
    else
        std::cout << "Point (5, 0) is OUTSIDE (on edge/vertex)." << std::endl;

    return 0;
}