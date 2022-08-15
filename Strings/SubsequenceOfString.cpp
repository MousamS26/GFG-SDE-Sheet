#include "bits/stdc++.h"
using namespace std;

bool subsequence(const string &s1, const string &s2)
{
	if (s1.length() < s2.length())
		return false;
	int j = 0;
	for (int i = 0; i < s1.length() && j < s2.length(); i++)
	{
		if (s1[i] == s2[j])
			j++;
	}
	return (j == s2.length());
}
int main()
{
	string s1 = "ABSDS";
	string s2 = "ABAVAVAV";
	cout << subsequence(s1, s2) << endl;
}