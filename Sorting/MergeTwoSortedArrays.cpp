#include<bits/stdc++.h>
using namespace std;

int mergeSort(int a[], int b[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (a[i] <= b[j])
		{
			cout << a[i] << " ";
			i++;
		}
		else
		{
			cout << b[j] << " ";
		}
	}
	while (i < m)
	{
		cout << a[i] << " ";
		i++;
	}
	while (j < n)
	{
		cout << b[j] << " ";
		j++;
	}
}
int main()
{
	int arr1[] = {2, 3, 4, 5, 6};
	int arr2[] = {12, 23, 34, 45, 65};
	int n = 5;
	int m = 5;
	mergeSort(arr1, arr2, n, m);
}