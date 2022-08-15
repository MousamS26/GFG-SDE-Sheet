#include "bits/stdc++.h"
using namespace std;

void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[] = {8, 2, 4, 2, 4, 5, 1};
	int n = 7;
	insertionSort(arr, n);
	for (auto i : arr)
		cout << i << " ";
}