#include "bits/stdc++.h"
using namespace std;

int longestSubarray(int a[], int b[], int n, int m)
{
	int temp[n];
	for (int i = 0; i < n; ++i)
	{
		temp[i] = a[i] - b[i];
	}
	unordered_map<int, int> mp;
	int presum = 0, res = 0;
	for (int i = 0; i < n; i++)
	{
		presum += temp[i];
		if (presum == 0)
			res = i + 1;
		if (mp.find(presum) == mp.end())
			mp.insert({presum, i});
		else
			res = max(res, i - mp[presum]);
	}
	return res;
}
int main()
{
	int a[] = {0, 1, 0, 0, 0, 0};
	int b[] = {1, 0, 1, 0, 0, 1};
	int n = 6, m = 6;
	cout << longestSubarray(a, b, n, m) << endl;
}