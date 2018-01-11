/* Compound assignment operators ( += , -=, *= …) Increment & Decrement operator (++, --)
 * implicit and explicit casting
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */
#include <iostream>
using namespace std;

int main() {

    int a=10 , b=20 ,c ,d;
    a=a+1; // a=11
    cout<<"a="<<a<<endl;
    a++;  // ==> a=a+1 ,, x = 12
    cout<<"a="<<a<<endl;
    c = b--;  // c= 20  and  b = 19
    cout<<"c="<<c<<"\tb="<<b<<endl;
    d = ++a; // d = 13 and a = 13
    cout<<"d="<<d<<"\ta="<<a<<endl;

    int value =200;
    value+=40;  // value=value+40
    cout<<"value="<<value<<endl;

    return 0;
}

