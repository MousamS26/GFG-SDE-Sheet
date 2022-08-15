#include "bits/stdc++.h"
using namespace std;

int lPartition(int arr[], int l, int h)
{
	int pivot = arr[h];
	int i = l - 1;
	for (int j = l; j <= h - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[h]);
	return (i + 1);
}

void qSort(int arr[], int l, int h)
{
	if (l < h)
	{
		int p = lPartition(arr, l, h);
		qSort(arr, l, p - 1);
		qSort(arr, p + 1, h);
	}
}

int main()
{
	int arr[] = {3, 2, 1, 4 , 5 , 6, 9};
	int l = 0;
	int h = 6;
	qSort(arr, l, h);
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}
