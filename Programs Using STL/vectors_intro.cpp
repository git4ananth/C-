#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{

    vector<int> g1;

    for (int i = 0; i < 5; i++)
    {
        g1.push_back(i);
    }
    // returns an iterator pointing to the starting of the list
    for (auto i = g1.begin(); i != g1.end(); i++)
    {
        cout << *i << endl;
    }
    // // returns a constant iterator pointing to the start of the list
    // cout << "\nOutput of cbegin and cend: ";
    // for (auto i = g1.cbegin(); i != g1.cend(); i++)
    //     cout << *i << " ";
    // // returns an iterator pointing to the reverse beginning ==> reverse
    // cout << "\nOutput of rbegin and rend: ";
    // for (auto ir = g1.rbegin(); ir != g1.rend(); ir++)
    //     cout << *ir << " ";
    // // returns a constant iterator to the reverse beginning ==> reserve
    // cout << "\nOutput of crbegin and crend : ";
    // for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
    //     cout << *ir << " ";

    cout << "Size : " << g1.size();           // returns the number of elements in a vector
    cout << "\nCapacity : " << g1.capacity(); // Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    cout << "\nMax_Size : " << g1.max_size(); // Returns the maximum number of elements that the vector can hold.

    g1.resize(4); // resizes vector to the specified number of elements
    cout << "\nSize : " << g1.size();

    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    g1.shrink_to_fit(); // Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";

    g1.resize(20);
    cout << endl;
    cout << "New size" << g1.size() << endl;

    vector<int> g2;

    for (int i = 1; i <= 10; i++)
        g2.push_back(i * 10);

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g2.cbegin(); i != g2.cend(); i++)
        cout << *i << " ";

    cout << "\nReference operator [g] : g2[2] = " << g2[2]; // Returns a reference to the element at position ‘g’ in the vector

    cout << "\nat : g2.at(4) = " << g2.at(4); // Returns a reference to the element at position ‘g’ in the vector

    cout << "\nfront() : g2.front() = " << g2.front(); // Returns a reference to the first element in the vector

    cout << "\nback() : g2.back() = " << g2.back(); // Returns a reference to the last element in the vector

    // pointer to the first element
    int *pos = g2.data(); // Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

    cout << "\nThe first element is " << *(pos + 5);

    vector<int> v;

    // fill the vector with 10 five times
    v.assign(5, 10); // assigning a vector with number 10, 5 times. (by replacing old ones)

    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // inserts 15 to the last position
    v.push_back(15); // pushs 15 at the end of the vector
    int n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; //?why?
 
    // removes last element
    v.pop_back(); // pops the element from the end of vector
 
    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // inserts 5 at the beginning
    v.insert(v.begin(), 5); // v.begin() returns pointer to first element. v.insert(v.begin(),5) ==> inserts the 5 at v.begin()
 
    cout << "\nThe first element is: " << v[0];
 
    // removes the first element
    v.erase(v.begin()); // v.begin() returns pointer to first element. v.erase(v.begin()) ==> erases the element present in the beginning.
 
    cout << "\nThe first element is: " << v[0];
 
    // inserts at the beginning
    v.emplace(v.begin(), 5); // v.emplace(v.begin(),5) => inserts an element(5 at beginning) and extends the vector by 1 element. 
    cout << "\nThe first element is: " << v[0];
 
    // Inserts 20 at the end
    v.emplace_back(20); // v.emplace_back() => enter 20 at the end and extends vector by 1 element.
    n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1];
 
    // erases the vector
    v.clear(); // deleted contents of vector
    cout << "\nVector size after erase(): " << v.size();

    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
 
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
 
    // Swaps v1 and v2
    v1.swap(v2); // It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
 
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
 
}
