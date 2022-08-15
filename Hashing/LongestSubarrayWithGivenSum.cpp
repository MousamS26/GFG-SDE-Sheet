#include "bits/stdc++.h"
using namespace std;

int longestSubarrayWithGivenSum(int arr[], int n, int sum)
{
	unordered_map<int, int>m;
	int presum = 0, res = 0;
	for (int i = 0; i < n; i++)
	{
		presum += arr[i];
		if (presum == sum)
			res = i + 1;
		if (m.find(presum) == m.end())
			m.insert({presum, i});
		if (m.find(presum - sum) != m.end())
			res = max(res, i - m[presum - sum]);
	}
	return res;
}

int main()
{
	int arr[] = {8, 3, 1, 5, -6, 6, 2, 2};
	int n = 8, sum = 4;
	cout << longestSubarrayWithGivenSum(arr, n, sum) << endl;
}