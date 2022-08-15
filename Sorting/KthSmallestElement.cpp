#include "bits/stdc++.h"
using namespace std;

int lomnuto(int arr[], int l, int r)
{
	int pivot = arr[r];
	int i = l - 1;
	for (int j = l; j <= r - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[r]);
	return i + 1;
}
int kSmallestELement(int arr[], int n, int k)
{
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int p = lomnuto(arr, l, r);
		if (p == k - 1)
			return arr[p];
		else if (p > k - 1)
			r = p - 1;
		else
			l = p + 1;
	}
	return -1;
}
int main()
{
	int arr[] = {10, 4, 5, 8, 11, 6, 26};
	int n = 7;
	int k = 5;
	cout << kSmallestELement(arr, n, k) << endl;
}