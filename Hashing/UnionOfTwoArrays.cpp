#include "bits/stdc++.h"
using namespace std;

int unionn(int a[], int b[], int n, int m)
{
	unordered_set<int> s;
	for (int i = 0; i < n; i++)
		s.insert(a[i]);
	for (int j = 0; j < m; j++)
		s.insert(b[j]);

	return s.size();
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {4, 5, 6, 7};
	int n = 5;
	int m = 4;
	cout << unionn(a, b, n, m) << endl;
}