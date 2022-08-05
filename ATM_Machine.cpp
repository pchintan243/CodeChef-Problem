// Problem:

// There is an ATM machine. Initially, it contains a total of KK units of money. NN people (numbered 11 through NN) want to withdraw money; for each valid ii, the ii-th person wants to withdraw A_iA 
// i
// ​
//   units of money.

// The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else.

// For each person, determine whether they will get the required amount of money or not.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, k;
	int a[10000];
	cin >> t;
	while(t--)
	{
	    int temp = 0;
	    cin >> n >> k;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	    }
	    for(int i = 0; i < n; i++)
	    {
    	    if(k>=a[temp])
    	    {
    	        cout << "1";
    	        k = k - a[temp];
    	    }
    	    else{
    	        cout << "0";
    	    }
    	    temp++;
	    }
	    cout << endl;
	}
	return 0;
}


// input:
// 2
// 5 10
// 3 5 3 2 1
// 4 6
// 10 8 6 4


// output:
// 11010
// 0010