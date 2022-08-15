//Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not.
//Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:

    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        if (A == B)
            return true;
        else
            return false;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<ll> arr(n, 0), brr(n, 0);

    // increase the count of elements in first array
    for (ll i = 0; i < n; i++)
        cin >> arr[i];


    // iterate through another array
    // and decrement the count of elements
    // in the map in which frequency of elements
    // is stored for first array
    for (ll i = 0; i < n; i++)
        cin >> brr[i];
    Solution ob;
    cout << ob.check(arr, brr, n) << "\n";
    return 0;
}  // } Driver Code Ends