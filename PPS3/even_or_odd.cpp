#include <iostream>
#include <cmath>

using namespace std;

void check_num(int num);
int check(long double n);

int main()
{
    long double num;
    cout << "Enter a Number" << endl;
    cin >> num;

    if (check(num))
        check_num(num);
    else
        cout << "INVALID";
}

void check_num(int num)
{
    if (num % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
}

int check(long double n)
{
    if (ceil(n) == floor(n))
        return 1;
    else
        return 0;
}
