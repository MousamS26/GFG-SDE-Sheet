#include "bits/stdc++.h"
using namespace std;

int intersection(int a[], int b[], int n, int m)
{
	unordered_set<int> s;
	for (int i = 0; i < n; i++)
		s.insert(a[i]);

	int res = 0;

	for (int j = 0; j < m; j++)
	{
		if (s.find(b[j]) != s.end())
		{
			res++;
			s.erase(b[j]);
		}
	}
	return res;
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {3, 4, 5, 6, 7};
	int n = 5;
	int m = 5;
	cout << intersection(a, b, n, m) << endl;
}