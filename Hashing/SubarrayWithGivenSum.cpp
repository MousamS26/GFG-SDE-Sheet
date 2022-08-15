#include <bits/stdc++.h>
using namespace std;

bool isOSubArray(int arr[], int n, int sum)
{
	unordered_set<int> h;
	int presum = 0;
	for (int i = 0; i < n; i++)
	{
		presum += arr[i];
		if (presum == sum)
			return true;
		if (h.find(presum - sum) != h.end())
			return true;
		h.insert(presum);
	}
	return false;
}

int main()
{
	int arr[] = {3, 4, 3, -1, -12};
	int n = 5;
	int sum = -10;
	cout << isOSubArray(arr, n, sum) << endl;
}