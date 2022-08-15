#include <bits/stdc++.h>
using namespace std;

int findRepeating(int arr[], int n)
{
	//Phase1
	int slow = arr[0], fast = arr[0];
	do {
		slow = arr[slow];
		fast = arr[arr[fast]];
	} while (slow != fast);

	//Phase2
	slow = arr[0];
	while (slow != fast)
	{
		slow = arr[slow];
		fast = arr[fast];
	}
	return slow;
}
int main()
{
	int arr[] = {1, 3, 2, 4, 6, 5, 7, 3};
	int n = 8;
	cout << findRepeating(arr, n) << endl;
}