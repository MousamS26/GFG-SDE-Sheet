#include "bits/stdc++.h"
using namespace std;

int countFreq(int arr[], int n)
{
	unordered_map<int, int> h;
	for (int x = 0; x < n; x++)
		h[arr[x]]++;
	for (auto e : h)
		cout << e.first << " " << e.second << endl;
}
int main()
{
	int arr[] = {10, 10, 10, 10, 20, 30, 40};
	int n = 7;
	countFreq(arr, n);
}