/* 
 * implicit and explicit casting
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */
#include <iostream>
using namespace std;

int main() {

    int x;
    double y;

    // implicit casting
    x= 7 * 0.5;   // 3
    y= 7 * 0.5;  // 3.5

    cout<<"x="<<x<<endl<<"y="<<y<<endl;

    // explicit casting
    x= (int) 7 * 0.5;
    y= (double) 7 * 0.5;

    cout<<"x="<<x<<endl<<"y="<<y<<endl;

    int value1 =10, value2=4;
    float result;

    result= (float) (value1/value2);    // result = 2

    cout<<"result= "<<result<<endl;

    result= (float) value1 / (float) value2; // result = 2.5

    cout<<"result= "<<result<<endl;
    return 0;
}


