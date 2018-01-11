/* program to print out the name of the day by reading the day number from user
 * if else statement LAB4
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main() {

    int dayNumber;

    cout<<"Enter the day number:";
    cin>>dayNumber;

    if(dayNumber==1)
        cout<<"Sunday\n";
    else if(dayNumber==2)
        cout<<"Monday \n";
    else if(dayNumber==3)
        cout<<"Tuesday";
    else if(dayNumber==4)
        cout<<"Wednesday";
    else if(dayNumber==5)
        cout<<"Thursday";
    else if(dayNumber==6)
        cout<<"Friday";
    else
        cout<<"Saturday";
    // try to enter number 12 !! correct the code to be more efficient 

    /* you could write it like this. all the same.
    if(dayNumber==1)
        cout<<"Sunday";
    else
        if(dayNumber==2)
            cout<<"Monday";
        else
            if(dayNumber==3)
                cout<<"Tuesday";
            else
                if(dayNumber==4)
                    cout<<"Wednesday";
                else
                    if(dayNumber==5)
                        cout<<"Thursday";
                    else
                        if(dayNumber==6)
                            cout<<"Friday";
                        else
                            cout<<"Saturday";
      */
    return 0;
}
