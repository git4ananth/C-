// Can you search for an element in a given array? Try to print that number if present else printf -1.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {23, 65, 34, 98, 77, 3, 22, 1, 54};
    int search_element;
    bool flag;
    cout << "Enter an element to search in Array : ";
    cin >> search_element;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == search_element)
        {
            flag = true;
            cout << "Element found at index " << i << "." << endl;
            break;
        }
    }
    if (flag == false)
    {
        cout << -1;
    }
}