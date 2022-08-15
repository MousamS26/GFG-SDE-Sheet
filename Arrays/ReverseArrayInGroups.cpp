// Given an array arr[] of positive integers of size N.
// Reverse every sub-array group of size K.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k) {
        for (int i = 0; i < n; i += k)
        {
            if (i + k < n)
                reverse(arr.begin() + i, arr.begin() + (i + k));
            else
                reverse(arr.begin() + i, arr.end());
        }
    }
};

// { Driver Code Starts.
int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<long long> arr;
    int k;
    cin >> k;

    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        arr.push_back(x);
    }
    Solution ob;
    ob.reverseInGroups(arr, n, k);

    for (long long i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
