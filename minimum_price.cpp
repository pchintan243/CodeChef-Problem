// In this code we can find milage of car
// check which car is cover maximum distance investing less amount


// Problem
// Chef wants to rent a car to travel to his restaurant which is NN kilometers away. He can either rent a petrol car or a diesel car.

// One litre of petrol costs XX rupees and one litre of diesel costs YY rupees. Chef can travel AA kilometers with one litre of petrol and BB kilometers with one litre of diesel.

// Chef can buy petrol and diesel in any amount, not necessarily integer. For example, if X = 95X=95, Chef can buy half a litre of petrol by paying 95/2 = 47.595/2=47.5 rupees.

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    int n, x, y, a, b;
    cin >> t;
    // 	n = chef ne ketlu travel krvu chhe
    // x = liter petrol ni price        price
    // y = liter diesel ni price        price
    // a = 1 liter petrol thi ketlu travel thay e   distance
    // b = 1 liter diesel thi ketlu travel thay e   distance

    for (int i = 0; i < t; i++)
    {
        cin >> n >> x >> y >> a >> b;
        float t1 = ((float)n / (float)a) * (float)x;
        float t2 = ((float)n / (float)b) * (float)y;
        if (x == y)
        {
            if (a < b)
            {
                cout << "DIESEL" << endl;
            }
            else if (a == b)
            {
                cout << "ANY" << endl;
            }
            else
            {
                cout << "PETROL" << endl;
            }
        }
        else
        {
            if (t1 < t2)
            {
                cout << "PETROL" << endl;
            }
            else if (t1 == t2)
            {
                cout << "ANY" << endl;
            }
            else
            {
                cout << "DIESEL" << endl;
            }
        }
    }
    return 0;
}


// input:
// 4
// 20 10 8 2 4
// 50 12 12 4 3
// 40 3 15 8 40
// 21 9 9 2 9

// output:
// DIESEL
// PETROL
// ANY
// DIESEL