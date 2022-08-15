#include "bits/stdc++.h"
using namespace std;

int main()
{
	unordered_map<string, int> mp;
	mp["gfg"] = 20;
	mp["ide"] = 30;
	mp.insert({"jvm", 40});

	for (auto x : mp)
		cout << x.first << " " << x.second << endl;

	//search

	if (mp.find("ide") != mp.end())
		cout << "Found\n";
	else
		cout << "Not Found\n";

	auto it = mp.find("ide");

	if (it != mp.end())
		cout << (it->second) << endl;

	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		cout << (it->first) << " " << (it->second) << endl;
	}

	//count

	if (mp.count("ide") > 0)
		cout << "Found\n";
	else
		cout << "Not FOund\n";

	//size

	cout << mp.size() << " ";

	//erase

	mp.erase("ide");
	mp.erase(mp.begin());
	cout << mp.size() << " ";
}