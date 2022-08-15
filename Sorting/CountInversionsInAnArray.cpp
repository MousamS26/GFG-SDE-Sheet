#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
	long long merge(long long arr[], long long int p, long long int q, long long int r)
	{
		long long int result = 0;
		long long int n1 = q - p + 1;
		long long int n2 = r - (q + 1) + 1;
		long long a[n1];
		long long b[n2];
		for (long long int i = 0; i < n1; i++)
		{
			a[i] = arr[p + i];
		}
		for (long long int j = 0; j < n2; j++)
		{
			b[j] = arr[q + 1 + j];
		}

		long long int i = 0, j = 0, k = p;
		while (i < n1 && j < n2)
		{
			if (a[i] <= b[j])
			{
				arr[k] = a[i];
				i++;
				k++;
			}
			else
			{
				arr[k] = b[j];
				result += n1 - i;
				j++;
				k++;
			}
		}

		while (i < n1)
		{
			arr[k] = a[i];
			i++;
			k++;
		}
		while (j < n2)
		{
			arr[k] = b[j];
			j++;
			k++;
		}
		return result;
	}

	long long mergeSort(long long arr[], long long int p, long long int r)
	{
		long long int result = 0;
		if (p < r)
		{
			long long int q = (p + r) / 2;
			result += mergeSort(arr, p, q);
			result += mergeSort(arr, q + 1, r);
			result += merge(arr, p, q, r);
		}
		return result;
	}

	long long int inversionCount(long long arr[], long long N)
	{
		long long int inversion;
		inversion = mergeSort(arr, 0, N - 1);
		return inversion;
	}

};

int main() {

#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	long long N;
	cin >> N;

	long long A[N];
	for (long long i = 0; i < N; i++) {
		cin >> A[i];
	}
	Solution obj;
	cout << obj.inversionCount(A, N) << endl;

	return 0;
}
