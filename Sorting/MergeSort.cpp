#include "bits/stdc++.h"
using namespace std;

void merge(int a[], int low, int mid, int high)
{
	int n1 = mid - low + 1, n2 = high - mid;
	int left[n1], right[n2];
	for (int i = 0; i < n1; i++) {left[i] = a[low + i];}
	for (int i = 0; i < n2; i++) {right[i] = a[mid + 1 + i];}

	int i = 0, j = 0, k = low;
	while (i < n1 && j < n2)
	{
		if (left[i] <= right[j])
		{
			a[k] = left[i];
			i++; k++;
		}
		else
		{
			a[k] = right[j];
			j++; k++;
		}
	}
	while (i < n1) {a[k] = left[i]; i++; k++;}
	while (j < n2) {a[k] = right[j]; j++; k++;}
}
void mergeSort(int a[], int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

int main()
{
	int arr[] = {3, 4, 1, 2, 5, 6, 0, 101};
	int l = 0;
	int r = 7;
	mergeSort(arr, l , r);
	for (auto i : arr)
		cout << i << " ";
}