/* Program to check whether username and password are correct or not
 * if else statement LAB4
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include <iostream>
using namespace std;

int main() {

    string username, password;
    cout<<"Enter username : ";
    cin>>username;
    cout<<"Enter Password : ";
    cin>>password;

    if(username=="admin" && password == "a123")
    {
        cout<<"Welcome Admin";
    }
    else
    {
        cout<<"Wrong username or password !! ";
    }
    return 0;
}
