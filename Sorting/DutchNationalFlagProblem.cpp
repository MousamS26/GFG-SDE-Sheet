#include "bits/stdc++.h"
using namespace std;

void sort(int arr[], int n)
{
	int low = 0, mid = 0, high = n - 1;
	while (mid <= high)
	{
		if (arr[mid] == 0)
		{
			swap(arr[low], arr[mid]);
			low++;
			mid++;
		}
		else if (arr[mid] == 1)
		{
			mid++;
		}
		else
		{
			swap(arr[mid], arr[high]);
			high--;
		}
	}
}
int main()
{
	int arr[] = {0, 1, 2, 0, 2, 1, 0, 1};
	int n = 8;
	sort(arr, n);
	for (auto i : arr)
		cout << i << " ";
}