#include "bits/stdc++.h"
using namespace std;
const int CHAR = 256;
bool anagramCheck(string &txt, string &pat)
{
	if (txt.length() > pat.length())
		return false;

	int CT[CHAR] = {0}, CP[CHAR] = {0};
	for (int i = 0; i < pat.length(); i++)
	{
		CT[txt[i]]++;
		CP[pat[i]]++;
	}
	for (int i = pat.length(); i < txt.length(); i++)
	{
		if (CP == CT)
			return true;
		CT[txt[i]]++;
		CT[txt[i - pat.length()]]--;
	}
	return false;
}

int main()
{
	string txt = "geeksforgeeks";
	string pat = "frog";
	cout << anagramCheck(txt, pat) << endl;
}