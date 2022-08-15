#include "bits/stdc++.h"
using namespace std;

void minSwaps(vector<int> nums)
{
	int n = nums.size();
	vector<pair<int, int>> p;
	for (int i = 0; i < n; i++)
	{
		p.push_back({nums[i], i});
	}
	sort(p.begin(), p.end());

	int i = 0, count = 0;
	for (i = 0; i < n; i++)
	{
		if (p[i].second != i)
		{
			count++;
			swap(p[i], p[p[i].second]);
			i = i - 1;
		}
	}
	return count;
}

int main()
{

	vector<int>nums = {2, 3, 6, 5, 1, 9};
	// int ans = minSwaps(nums);
	// cout << ans << "\n";
	minSwaps(nums);
	return 0;
}
