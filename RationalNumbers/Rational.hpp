//
//  Rational.hpp
//  RationalNumbers
//
//  Created by vinaypandya on 2/4/22.
//

#ifndef Rational_hpp
#define Rational_hpp

#include <stdio.h>
class Rational{
private:
    int numerator;
    int denominator;
    friend Rational operator*(const Rational& lhs,const Rational& rhs);
    friend bool operator==(const Rational& lhs,const Rational& rhs);
public:
    Rational();
    Rational(int num, int den);
    void setValues(int num, int den);
    int getnum();
    int getden();
    void Print();
    int GCD(int a, int b);
    void Reduce();
    Rational& operator+=(const Rational& rhs);
};
#endif /* Rational_hpp */
