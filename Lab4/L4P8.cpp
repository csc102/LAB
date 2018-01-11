/* Program check the biggest number by using condition operator (? : )
 * if else statement LAB4
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */
#include <iostream>
using namespace std;

int main() {

    int number1,number2, big;
    cout<<"Enter two numbers: ";
    cin>>number1>>number2;
    big= (number1>number2 ? number1 : number2); //condition operator, if number1>number2
                                               // return number1 otherwise return number2
    cout<<big;
    //or
    cout<<(number1 > number2 ? number1 : number2);

    return 0;
}
