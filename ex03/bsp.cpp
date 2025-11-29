/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 09:52:07 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/29 17:49:38 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"
/*
    Calculate the cross product (or determinant) of vector AB and vector AP.
    Formula: (Bx - Ax) * (Py - Ay) - (By - Ay) * (Px - Ax)
    
    Returns:
    > 0 : Point P is to the right of line AB
    < 0 : Point P is to the left of line AB
    = 0 : Point P lies exactly on line AB
*/



static Fixed abs_value(Point const a, Point const b, Point const p)
{
    return (b.getX() - a.getX()) * (p.getY() - a.getY()) - 
           (b.getY() - a.getY()) * (p.getX() - a.getX());
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
        // Calculate the cross product for the three edges of the triangle
    // Edge 1: AB -> P
    Fixed d1 = abs_value(a, b, point);
    
    // Edge 2: BC -> P
    Fixed d2 = abs_value(b, c, point);
    
    // Edge 3: CA -> P
    Fixed d3 = abs_value(c, a, point);

    /* The point is INSIDE if all cross products have the SAME sign.
       (All positive OR all negative).
       
       We also need to handle the "Edge" rule:
       If any value is 0, the point is on the edge/vertex, so return FALSE.
    */

    bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    // If we have both positive and negative results, the point is OUTSIDE.
    // If any result is 0 (point is on edge), the inequalities above are false, 
    // so !(true && true) handles it correctly? No, let's be explicit:
    
    if (d1 == 0 || d2 == 0 || d3 == 0)
        return false; // Point is on the edge or vertex

    // If we have only positives OR only negatives, it is inside.
    // If we have mixed signs, it is outside.
    return !(has_neg && has_pos);
}