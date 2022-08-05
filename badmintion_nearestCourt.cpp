// Problem
// Chef and Chefina are at positions XX and YY on a number line.

// They both love badminton.

// It is known that badminton courts are located at every integer point.

// They want to find a court such that the maximum distance travelled by either of them is minimized.

// Formally, suppose they choose the badminton court at position ZZ. You need to find the minimum value of \max(|X-Z|, |Y-Z|)max(∣X−Z∣,∣Y−Z∣) across all possible choices of ZZ. Here, |X|∣X∣ denotes absolute value of XX.

// Report this minimum value.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int x, y;
	cin >> t;
	int z;
	for(int i = 0; i < t; i++)
	{
	    cin >> x >> y;
	    z = x + y;
	    if(z % 2 == 0)
	    {
	        z = z / 2;
	        if(abs(x - z) < abs(y - z)){
	            
	            cout << abs(y - z) << endl;
	        }
	        else
	        {
	            cout << abs(x - z) << endl;
	        }
	    }
	    else
	    {
	        z = (z / 2) + 1;
	        if(abs(x - z) < abs(y - z)){
	            
	            cout << abs(y - z) << endl;
	        }
	        else
	        {
	            cout << abs(x - z) << endl;
	        }
	    }
	}
	return 0;
}


// input:
// 4
// 3 5
// 7 6
// 1 10
// 63 31

// output:
// 1
// 1
// 5
// 16