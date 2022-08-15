#include "bits/stdc++.h"
using namespace std;

void selectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		swap(arr[min_index], arr[i]);
	}
}

int main()
{
	int arr[] = {8, 2, 4, 2, 4, 5, 1};
	int n = 7;
	selectionSort(arr, n);
	for (auto i : arr)
		cout << i << " ";
}