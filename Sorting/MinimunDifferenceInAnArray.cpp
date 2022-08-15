#include "bits/stdc++.h"
using namespace std;

int minDifference(int arr[], int n)
{
	sort(arr, arr + n);
	int res = INT_MAX;
	for (int i = 1; i < n; i++)
	{
		res = min(arr[i] - arr[i - 1], res);
	}
	return res;
}
int main()
{
	int arr[] = {3, 10 , 23, 14};
	int n = 4;
	cout << minDifference(arr, n) << endl;
}