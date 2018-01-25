/* C++ Program to compute factorial of a number
 * Factorial of n = 1*2*3...*n
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main()
{
    int number, i=1 ,factorial=1;
    cout<<"Enter number :";
    cin>>number;

    while(i <= number)
    {
        factorial*=i;
        i++;
    }
    cout<<"factorial of "<<number<<" = "<<factorial<<endl;
    return 0;
}
