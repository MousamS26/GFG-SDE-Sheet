#include "bits/stdc++.h"
using namespace std;

int longestSubarray(int arr[], int n)
{
	unordered_map<int, int>m;
	int presum = 0, res = 0;
	for (int i = 0; i < n; i++)
		arr[i] = (arr[i] == 0) ? -1 : 1;

	for (int i = 0; i < n; ++i)
	{
		presum += arr[i];

		if (presum == 0)
			res = i + 1;

		if (m.find(presum) != m.end())
			res = max(res, i - m[presum]);
		else
			m.insert({presum, i});
	}
	return res;
}
int main()
{
	int arr[] = {0, 1, 0, 1, 0, 1, 0, 1};
	int n = 8;
	cout << longestSubarray(arr, n) << endl;
}