#include "bits/stdc++.h"
using namespace std;

void countDistinctInWindow(int arr[], int n, int k)
{
	unordered_map<int, int> map;
	for (int i = 0; i < k; ++i)
	{
		map[arr[i]]++; //add elements to window and increase frequency
	}
	cout << map.size() << endl;
	for (int i = k; i < n ; i++)
	{
		map[arr[i - k]]--; //reduce frequency of last element of previous window
		if (map[arr[i - k]] == 0) //if frequency = 0, remove element
			map.erase(arr[i - k]);
		map[arr[i]]++; //add new elements
		cout << map.size() << endl; //return size
	}
}
int main()
{
	int arr[] = {2, 3, 5, 4, 5,};
	int n = sizeof arr / sizeof arr[0];
	int k = 3;
	countDistinctInWindow(arr, n, k);
}