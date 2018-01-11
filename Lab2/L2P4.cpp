/*
 * constant variables: #define , const
 * Author: Khalid Alkhaldi
 * Std ID: 12345678
 */

#include<iostream>
using namespace std;

// constant preprocessor #define
#define PI 3.14

int main()
{
    // Declaring variables
    float avg;

    // Declaring Constant
    const int week_day = 7;
    const int hrDay=24;
    // const int date;   error !
    cout<<PI;  // 3.14

    cout<<"week day:"<<week_day<<"\t"<<hrDay;

    return 0;
}

