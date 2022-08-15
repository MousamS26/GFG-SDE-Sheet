// Given an array Arr[] of N integers.
// Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	// arr: input array
	// n: size of array
	//Function to find the sum of contiguous subarray with maximum sum.
	long long maxSubarraySum(int arr[], int n) {

		int res = arr[0];
		int maxEnding = arr[0];

		for (int i = 1; i < n; ++i)
		{
			maxEnding = max(maxEnding + arr[i], arr[i]);
			res = max(res, maxEnding);
		}
		return res;
	}
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n;

	cin >> n; //input size of array

	int a[n];

	for (int i = 0; i < n; i++)
		cin >> a[i]; //inputting elements of array

	Solution ob;

	cout << ob.maxSubarraySum(a, n) << endl;
}