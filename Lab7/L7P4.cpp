/* the power function 
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main()
{
    int number, pow , result=1;

    cout<<"Enter a value: ";
    cin>>number;
    cout<<"Enter a power";
    cin>>pow;             // try to enter 1 or 0 what would happen!

    for (int i = 1; i < pow; i++) {
        result*=number;
    }

    cout<<"the result = "<<result;
    return 0;
}
