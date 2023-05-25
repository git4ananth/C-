#include <iostream>
#include <cstdlib>
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

int main()
{
    int rooms_required = 1; //atleast 1 needed
    int batches[3][2];
    // For taking integer inputs in a batches //
    for (int m1 = 0; m1 < 3; m1++)
    {
        for (int m2 = 0; m2 < 2; m2++)
        {
            printf("Enter Element for Batch[%d,%d]", m1, m2);
            cin >> batches[m1][m2];
        }
    }
    cout << endl;
    Batch b1(batches[0][0], batches[0][1]);
    Batch b2(batches[1][0], batches[1][1]);
    Batch b3(batches[2][0], batches[2][1]);

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