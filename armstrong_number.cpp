//Write a C++ program to check whether a number is an armstrong number.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter num to check if its an armstrong num : ";
    cin >> num;
    int num_dup, temp, sum = 0, num_digits = 0;
    num_dup = num;
    if (num > 0)
    {
        while (num_dup)
        {
            num_digits++;
            num_dup /= 10;
        }

        num_dup = num;

        while (num_dup)
        {
            temp = num_dup % 10;
            sum = sum + pow(temp, num_digits);
            // cout << "sum is : " << sum;
            num_dup /= 10;
        }

        if (num == sum)
        {
            cout << "Armstrong Number" << endl;
        }
        else
        {
            cout << "Not an Armstrong Number" << endl;
        }
    }
    else{
        cout << "Enter a positive number" << endl;
    }
}