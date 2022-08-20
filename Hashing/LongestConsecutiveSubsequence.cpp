#include "bits/stdc++.h"
using namespace std;

int longestConsecutive(int arr[], int n)
{
	unordered_set<int> ht;
	int res = 0;
	for (int i = 0; i < n; ++i)
		ht.insert(arr[i]);

	for (int i = 0; i < n; ++i)
	{
		if (ht.find(arr[i] - 1) == ht.end())
		{
			int curr = 1;
			while (ht.find(arr[i] + curr) != ht.end())
				curr++;

			res = max(res, curr);
		}
	}
	return res;
}

int main()
{
	int arr[] = {23, 24, 25, 25, 27, 26, 29};
	int n = sizeof arr / sizeof arr[0];
	cout << longestConsecutive(arr, n) << endl;
}