#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

class Batch
{
    int start_time;
    int end_time;

public:
    Batch(int start_time, int end_time)
    {
        this->start_time = start_time;
        this->end_time = end_time;
    }
    bool operator==(Batch const &obj)
    {
        //(Start1  <= End2) && (End1 >= Start2)
        return (start_time <= obj.end_time) && (end_time >= obj.start_time);
    }
};

int* convert_string_to_array(string input) {
    string input = "{{0, 5}, {1, 2}, {1, 10}}";
    vector<int> arr; // change "int" to the data type you need (eg. vector<pair<int,int>> arr;)

    int i = 0;
    while (i < input.size()) {
        if (isdigit(input[i])) {
            int num = 0;
            while (i < input.size() && isdigit(input[i])) {
                num = num * 10 + (input[i] - '0');
                i++;
            }
            arr.push_back(num);
        }
        else {
            i++;
        }
    }

    int* array = new int[arr.size()]; // allocate memory for the array
    for (int j = 0; j < arr.size(); j++) {
        array[j] = arr[j]; // copy vector values to array
    }

    return array; // return the array
}

int main()
{
    int rooms_required = 1; //atleast 1 needed  
    //batches
    //cout<<"Enter the String: ";
    //gets(str);
    //int batches[3][2]= {{3,6},{ 5,4 },{ 2,4 }};
    string input_string = "{{0, 5}, {1, 2}, {1, 10}}";
    int* arry = convert_string_to_array(input_string);
    //now build the objects from the array
    Batch b1(arry[0],arry[1]), b2(arry[2],arry[3]), b3(arry[4], arry[5]);
    cout << endl;
    if (b1 == b2)
    {
        rooms_required++;
    }
    if (b2 == b3)
    {
        rooms_required++;
    }
    cout << rooms_required;
};