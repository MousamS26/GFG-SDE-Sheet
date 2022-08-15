#include "bits/stdc++.h"
using namespace std;

void BubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

int main()
{
	int arr[] = {8, 2, 4, 2, 4, 5, 1};
	int n = 7;
	BubbleSort(arr, n);
	for (auto i : arr)
		cout << i << " ";
}