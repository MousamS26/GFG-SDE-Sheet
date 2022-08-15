//Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.
//In case of multiple subarrays, return the subarray which comes first on moving from left to right.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> ans;
        long long currSum;
        currSum = 0;
        int l = 0;
        for (int i = 0; i < n; i++) {
            currSum += arr[i];
            if (currSum == s) {
                ans.push_back(l + 1);
                ans.push_back(i + 1);
                return ans;
            }
            else if (currSum > s) {
                currSum = 0;
                i = l;
                l++;
            }
        }
        ans.push_back(-1);
        return ans;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    long long s;
    cin >> n >> s;
    int arr[n];
    const int mx = 1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    vector<int>res;
    res = ob.subarraySum(arr, n, s);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;

    return 0;
}