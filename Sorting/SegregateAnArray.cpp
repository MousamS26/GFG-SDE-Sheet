#include "bits/stdc++.h"
using namespace std;

void segregateHoares(int arr[], int n)
{
	int i = -1, j = n;
	while (true)
	{
		do {i++;} while (arr[i] < 0);
		do {j--;} while (arr[j] >= 0);
		if (i >= j)
			return;
		swap(arr[i], arr[j]);
	}
}

int main()
{
	int arr[] = { -1, 4, -2, 5};
	int n = 4;
	segregateHoares(arr, n);
	for (auto i : arr)
		cout << i << " ";
}