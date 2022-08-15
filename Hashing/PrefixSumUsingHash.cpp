#include <bits/stdc++.h>
using namespace std;

bool isOSubArray(int arr[], int n)
{
	unordered_set<int> h;
	int preSum = 0;
	for (int i = 0; i < n; ++i)
	{
		preSum += arr[i];
		if (h.find(preSum) != h.end())
			return true;
		if (preSum == 0)
			return true;
		h.insert(preSum);
	}
	return false;
}

int main()
{
	int arr[] = {3, 4, 3, -1, 1};
	int n = 5;
	cout << isOSubArray(arr, n) << endl;
}