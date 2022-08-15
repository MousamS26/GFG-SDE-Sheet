#include "bits/stdc++.h"
using namespace std;

bool palindrome(string &s)
{
	int i = 0, j = s.length() - 1;
	while (i < j)
	{
		if (s[i] != s[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}
int main()
{
	string s = "ABBA";
	cout << palindrome(s) << endl;
}