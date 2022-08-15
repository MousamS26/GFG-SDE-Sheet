#include "bits/stdc++.h"
using namespace std;

void reverseIt(char str[], int low, int high)
{
	while (low <= high)
	{
		swap(str[low], str[high]);
		low++;
		high--;
	}
}
void reverseWords(char str[], int n)
{
	int start = 0;
	for (int end = 0; end < n; end++)
	{
		if (str[end] == ' ')
		{
			reverseIt(str, start, end - 1);
			start = end + 1;
		}
	}
	reverseIt(str, start, n - 1);
	reverseIt(str, 0, n - 1);
}
int main()
{
	char str[] = "hello watchers";
	int n = 14;
	reverseWords(str, n);
	for (char i : str)
		cout << i;
}