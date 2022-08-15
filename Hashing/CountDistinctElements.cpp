#include "bits/stdc++.h"
using namespace std;

int countDistinct(int arr[], int n)
{
	// unordered_set<int> s;
	// for (int i = 0; i < n; i++)
	// {
	// 	s.insert(arr[i]);
	// }
	// return s.size();

	unordered_set<int> s(arr, arr + n);
	return s.size();
}
int main()
{
	int arr[] = {1, 2, 1, 2, 3, 2, 3, 4};
	int n = 8;
	cout << countDistinct(arr, n) << endl;
}
