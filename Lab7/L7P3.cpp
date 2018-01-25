/* how to use for statement. This program is print out numbers from 1 to 10
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 10; i++) {

        if(i%2 == 0)
            cout<<i<<" is Even\n";
        else
            cout<<i<<" is Odd\n";
    }

    return 0;
}
