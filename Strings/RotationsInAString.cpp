#include "bits/stdc++.h"
using namespace std;

bool rotation(string &s1, string &s2)
{
	if (s1.length() != s2.length())
		return false;
	return ((s1 + s2).find(s2) != string::npos);
}
int main()
{
	string s1 = "ABCD";
	string s2 = "CDBA";
	cout << rotation(s1, s2) << endl;
}
