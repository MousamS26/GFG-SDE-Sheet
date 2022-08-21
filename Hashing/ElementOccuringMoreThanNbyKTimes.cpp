#include "bits/stdc++.h"
using namespace std;

void printMore(int arr[], int n, int k)
{
	unordered_map<int, int> map;
	for (int i = 0; i < n; i++)
		map[arr[i]]++;
	for (auto j : map)
	{
		if (j.second >= (n / k) - 1)
			cout << j.first << endl;
	}
}

int main()
{
	int arr[] = {10, 20, 30, 10, 50, 30, 10};
	int n = 7;
	int k = 2;
	printMore(arr, n, k);

}