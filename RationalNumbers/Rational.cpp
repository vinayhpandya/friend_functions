//
//  Rational.cpp
//  RationalNumbers
//
//  Created by vinaypandya on 2/4/22.
//

#include "Rational.hpp"
#include <iostream>
using namespace std;
Rational::Rational(){
    
}
Rational::Rational(int num,int den){
    numerator=num;
    denominator=den;
}
void Rational::setValues(int num, int den){
    if(den == 0){
          cout<<"Divide by zero exception";
        }
        else{
          numerator = num;
          denominator = den;
        }
}
int Rational::getnum(){
    return numerator;
}
int Rational::getden(){
    return denominator;
}
void Rational::Print(){
    cout<<numerator<<"/"<<denominator<<endl;;
}
int Rational::GCD(int a,int b){
    if (b == 0)
          return a;
        return GCD(b, a % b);
}
void Rational::Reduce(){
    int denom;
          denom = GCD(numerator, denominator);
          numerator/=denom;
          denominator/=denom;
          cout<<"Numerator: "<<numerator<<"\n Denominator: "<<denominator<<endl;
}
Rational& Rational::operator+=(const Rational& rhs){
    this->numerator+=rhs.numerator;
    this->denominator+=rhs.denominator;
    return *this;
}
Rational operator*(const Rational& lhs,const Rational& rhs){
    return *new Rational(lhs.numerator*rhs.numerator,lhs.denominator*rhs.denominator);
}
bool operator==(const Rational& lhs,const Rational& rhs){
    Rational lhs_=lhs;
    Rational rhs_=rhs;
    lhs_.Reduce();
    rhs_.Reduce();
    if(lhs_.getnum()==rhs_.getnum() and lhs_.getden()==rhs_.getden()){
        return true;
    }
    return false;
}
