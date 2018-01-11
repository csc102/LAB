/*
 * Declaration of variable and read data from user
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include<iostream>
using namespace std;

int main()
{
    // Declaring variables
    int age;
    int std_number, stdPhone;
    string studentName;

    cout<<"Enter your name:"; // Display message to user
    cin>>studentName;   // read data from user keyboard ( input statement)

    cout<<"Enter your age:";
    cin>>age;

    cout<<"Enter Your Phone number:";
    cin>>stdPhone;

    cout<<"\n"; // print new line

    // Display all user information
    cout<<"Welcome "<<studentName<<endl;
    cout<<"Your age is:"<<age<<endl;
    cout<<"Your Phone number is:"<<stdPhone<<endl;

    return 0;
}

