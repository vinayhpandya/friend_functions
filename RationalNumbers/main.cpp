//
//  main.cpp
//  RationalNumbers
//
//  Created by vinaypandya on 2/4/22.
//

#include <iostream>
#include "Rational.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    Rational c(1,3);
    c.Print();
    Rational b(3,9);
    c+=b;
    c.Print();
    Rational d=c*b;
    d.Print();
    if (c==b){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not equal"<<endl;
    }
    return 0;
}
