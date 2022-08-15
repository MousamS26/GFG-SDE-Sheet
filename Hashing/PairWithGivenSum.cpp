#include "bits/stdc++.h"
using namespace std;

bool isPair(int arr[], int n, int sum)
{
	unordered_set<int> s;

	for (int i = 0; i < n; i++)
	{
		if (s.find(sum - arr[i]) != s.end())
			return true;
		s.insert(arr[i]);
	}
	return false;
}
int main()
{
	int arr[] = {5, 6, 10};
	int n = 3;
	int x = 16;
	cout << isPair(arr, n, x);
}