#include "bits/stdc++.h"
using namespace std;

void intersection(int a[], int b[], int n, int m)
{
	int i(0), j(0);
	while (i < n && j < m)
	{
		if (i > 0 && a[i] == a[i - 1])
		{
			i++;
			continue;
		}
		if (a[i] < b[j])
			i++;
		else if (a[i] > b[j])
			j++;
		else
		{
			cout << a[i] << " ";
			i++; j++;
		}
	}
}
int main()
{
	int a[] = {10, 20, 20, 30, 40};
	int b[] = {20, 30, 40, 50, 50};
	int n = 5;
	int m = 5;
	intersection(a, b, n, m);
}