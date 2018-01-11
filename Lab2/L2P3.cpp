/*
 * Assignment operator(=), Mathematics Operations, read data from user
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include<iostream>
using namespace std;

int main()
{
    // Declaring variables
    int number1,number2;
    int sum,sub,mult;
    float div;

    cout<<"Enter 1st number:";
    cin>>number1;

    cout<<"Enter 2nd number:";
    cin>>number2;

    sum=number1 + number2;
    sub=number1 - number2;
    mult= number1 * number2;
    div=number1 / number2;
    
    cout<<"Sum="<<number1+number2<<endl;
    cout<<"Sum="<<sum<<endl;
    cout<<"Sub="<<sub<<"\nMult="<<mult<<"\nDiv="<<div<<endl;

    return 0;
}

