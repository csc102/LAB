/* C++ Program to convert temperature from either Fahrenheit or Celsius   
 * Factorial of n = 1*2*3...*n
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main()
{
    int option;
    float temp;
    string menu="1.converts Fahrenheit(F) to Celsius (C)\n2.Convert Celsius (C) to Fahrenheit (F)\n3.EXIT\n\nEnter a Choice :";


    while(true)
    {
        cout<<menu;
        cin>>option;

        if(option ==1)
        {
            cout<<"Enter the temperature in fahrenheit : ";
            cin>>temp;
            cout<<(temp-32) / 1.8<<endl;
        }
        else if(option == 2)
        {
            cout<<"Enter the temperature in celsius : ";
            cin>>temp;
            cout<<(1.8 * temp) + 32<<endl;
        }
        else if(option==3)
        {
            break;
        }
        else
        {
            cout<<"Wrong choice !!\n";
        }
    }

    return 0;
}
