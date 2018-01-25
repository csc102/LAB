/*  Multiple variables in for statement 
 * Author: Khalid Alkhaldi
 * Std ID: ##########
 */

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0, count=5; i < 3; i++)
    {
        cout<<count<<"\t";
    }
    
    cout<<"\n---------------------\n";
    
    for (int i = 0, x=8; i < 3; i++,x--) {
        cout<<"i="<<i<<endl<<"x="<<x<<endl;
    }

    return 0;
}
