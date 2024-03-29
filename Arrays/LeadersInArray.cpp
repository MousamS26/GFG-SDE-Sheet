// Given an array A of positive integers.
// Your task is to find the leaders in the array.
// An element of array is leader if it is greater than or equal to all the elements to its right side.
// The rightmost element is always a leader.

#include <bits/stdc++.h>
using namespace std;
class Solution {

public:
    vector<int> leaders(int a[], int n) {

        int currentMax = 0;
        vector<int> ans;
        currentMax = a[n - 1];
        ans.push_back(currentMax);
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] >= currentMax) {
                ans.push_back(a[i]);
                currentMax = a[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};


int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    // long long t;
    // cin >> t;//testcases
    long long n;
    cin >> n;//total size of array

    int a[n];

    //inserting elements in the array
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    Solution obj;
    //calling leaders() function
    vector<int> v = obj.leaders(a, n);

    //printing elements of the vector
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;
}
