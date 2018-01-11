/*
 * Declaration of variable with or without initial value
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include<iostream>
using namespace std;

int main()
{
    int age=20; // variable with initial value
    int std_number, stdPhone;   // variable without initial value

    string studentName="Nawa";

    char level='B';
    char alph=65;    // alph=’A’, ASCII Code of A is 65
    cout<<"alph:"<<alph<<endl;
    age=20;
    std_number=33;  

    stdPhone=51234588;

    cout<<"Welcome "<<studentName<<endl;
    cout<<"Your age is:"<<age<<endl;
    cout<<"Your level:"<<level<<endl;
    cout<<"Your Phone number is:"<<stdPhone<<endl;

    return 0;
}

