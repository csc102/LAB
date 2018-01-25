/* Simple Calculator Program by using switch statement
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main()
{
    int option, num1,num2;
    cout<<"********** Simple Calculator Program **********\n\n";
    cout<<"1. Addition (+)\n2. Subtraction(-)\n3. Multiplication(*)\n4. Division(/)\n\n";
    cout<<"Enter Your Choice :";
    cin>>option;

    cout<<"Enter 1st number :";
    cin>>num1;
    cout<<"Enter 2nd number :";
    cin>>num2;
    
    switch (option)
    {
        case 1 :
            cout<<num1<<" + "<<num2<<" = "<<num1+num2;
            break;

        case 2 :
            cout<<num1<<" - "<<num2<<" = "<<num1-num2;
            break;

        case 3 :
            cout<<num1<<" * "<<num2<<" = "<<num1*num2;
            break;

        case 4 :
            cout<<num1<<" / "<<num2<<" = "<<num1/num2;
            break;

        default :
            cout<<"Wrong Choice\n";
            break;
    }
    return 0;
}
