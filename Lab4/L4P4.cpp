/* Simple Calculator Program
 * if else statement LAB4
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main() {


    int option,number1,number2;
    float result;
    cout<<"********** Simple Calculator Program **********\n\n";
    cout<<"1. Addition (+)\n2. Subtraction(-)\n3. Multiplication(*)\n4. Division(/)\n\n";
    cout<<"Enter Your Choice :";
    cin>>option;

    cout<<"Enter two number :";
    cin>>number1>>number2;

    if(option==1)
    {
        result=number1 + number2;
        cout << "Result= " << result;
    }
    else if(option==2)
    {
        result=number1 - number2;
        cout << "Result= " << result;
    }
    else if(option==3)
    {
        result=number1 * number2;
        cout << "Result= " << result;
    }
    else if(option==4)
    {
        result=number1 / number2;
        cout << "Result= " << result;
    }
    else
        cout<<"Wrong Choice..!!";

    return 0;
}

