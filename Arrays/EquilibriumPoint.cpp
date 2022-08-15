// Given an array A of n positive numbers.
// The task is to find the first Equilibium Point in the array.
// Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution {
public:
	// Function to find equilibrium point in the array.
	// a: input array
	// n: size of array
	int equilibriumPoint(long long a[], int n) {

		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += a[i];

		int lsum = 0;
		for (int i = 0; i < n; i++)
		{
			if (lsum == sum - a[i])
				return a[i];
			lsum += a[i];
			sum -= a[i];
		}
		return -1;
	}
};

// { Driver Code Starts.


int main() {

#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	long long n;

	//taking input n
	cin >> n;
	long long a[n];

	//adding elements to the array
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}

	Solution ob;

	//calling equilibriumPoint() function
	cout << ob.equilibriumPoint(a, n) << endl;
	return 0;
}