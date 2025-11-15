/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:33:10 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/15 14:37:29 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

class Number 
{
    private:
      int   _value;
    public  :
        Number() : _value(0) {
          std::cout << "the constructor has been called" ;
        }
        

        Number(const Number& other) : _value(other._value) {
            std::cout << "copy constructor called";
        }
        
        //copy assignment operator
        Number& operator=(const Number&other )
        {
              if(this != &other)
              {
                  _value = other._value;
              }
              return *this;
        }
        ~Number() 
        {
            std::cout << "the destructor has benn called";
        }

        int getvalu() const 
        {
            return _value;
        }

        void  setvalue(int value)
        {
            _value = value;
        }
};

int main()
{
    Number obj1();
    return 0;
}