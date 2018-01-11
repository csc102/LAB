/* Program to check whether an alphabet is vowel or not
 * if else statement LAB4
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main() {

    char alphabet;
    cout<<"Enter an alphabet : ";
    cin>>alphabet;
    if(alphabet=='a' ||  alphabet=='e' || alphabet=='i' ||  alphabet=='o' || alphabet=='u' )
    {
        cout<<"This is a vowel";
    }
    else
    {
        cout<<"This is not a vowel";
    }
    return 0;
}
