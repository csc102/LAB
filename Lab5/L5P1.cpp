/* Program asks the user to input number of week's day by using switch statement
 * you cant use string or float value with case lable
 *  Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter number of week's day (1-7): ";
    cin>>day;
    switch (day)
    {
        case 1 : 
            cout<<"Sunday\n";
            break;
            
        case 2 : 
            cout<<"Monday\n";
            break;
            
        case 3 : 
            cout<<"Tuesday\n";
            break;
            
        case 4 : 
            cout<<"Wednesday\n";
            break;
            
        case 5 : 
            cout<<"Thursday\n";
            break;
            
        case 6 : 
            cout<<"Friday\n";
            break;
            
        case 7 : 
            cout<<"Saturday\n";
            break;
            
        default : cout<<"Wrong number of day\";
            break;
    }
    return 0;
}