/* Program asks user to enter grade letter then it prints the number of grade
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main()
{
    char let;
    cout<<"Enter grade (A-D) :";
    cin>>let;

    switch (let)
    {
        case 'A' : case 'a':     //for multiple option you could write many cases
            cout<<"your grade is 90";
            break;

        case 'B': case 'b':
            cout<<"your grade is 80";
            break;

        case 'C': case 'c':
            cout<<"your grade is 70";
            break;

        case 'D': case 'd':
            cout<<"your grade is 60";
            break;

        default :
            cout<<"Wrong letter\n";
            break;
    }
    return 0;
}
