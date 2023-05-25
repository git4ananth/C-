#include <iostream>
#include <cstdlib>
using namespace std;

class Compare
{
    string str;

public:
    Compare(string str)
    {
        this->str = str;
    }
    bool operator < (Compare const &obj)
    {
        int l = str.length();
        int obj_l = obj.str.length();
        return l < obj_l;
    }
    bool operator > (Compare const &obj)
    {
        int l = str.length();
        int obj_l = obj.str.length();
        return l > obj_l;
    }
};

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    Compare str1(s1);
    Compare str2(s2);
    if (str1 < str2)
    {
        cout << "String s1 is smaller than String s2";
    }
    else if (str1 > str2)
    {
        cout << "String s2 is smaller than String s1";
    }
    else
    {
        cout << "Both the Strings s1 and s2 are Equal";
    }
}
