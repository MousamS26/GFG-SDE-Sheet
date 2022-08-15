//Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K.
//The task is to find the element that would be at the k’th position of the final sorted array.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int kthElement(int arr1[], int arr2[], int n, int m, int k)
	{
		vector<int> v;
		for (int i = 0; i < n; ++i)
		{
			v.push_back(arr1[i]);
		}
		for (int i = 0; i < m; ++i)
		{
			v.push_back(arr2[i]);
		}
		sort(v.begin(), v.end());
		return v[k - 1];
	}
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n, m, k;
	cin >> n >> m >> k;
	int arr1[n], arr2[m];
	for (int i = 0; i < n; i++)
		cin >> arr1[i];
	for (int i = 0; i < m; i++)
		cin >> arr2[i];

	Solution ob;
	cout << ob.kthElement(arr1, arr2, n, m, k) << endl;
	return 0;
}  // } Driver Code Ends
