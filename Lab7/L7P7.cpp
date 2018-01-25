/* infinite loop for. Print the number from 1 to 10
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main()
{
    int i=1;

    for (;;) // infinite loop
    {
        cout<<i<<"\t";
        if(i==10)
            break;
        i++;
    }

    return 0;
}