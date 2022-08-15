//Given an array arr[] of N non-negative integers representing the height of blocks.
//If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season.

#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    long long trappingWater(int arr[], int n) {
        long long res = 0;
        int lmax[n], rmax[n];
        lmax[0] = arr[0];
        for (int i = 1; i < n; ++i)
        {
            lmax[i] = max(arr[i], lmax[i - 1]);
        }
        rmax[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            rmax[i] = max(arr[i], rmax[i + 1]);
        }
        for (int i = 0; i < n; i++)
        {
            res = res + (min(lmax[i], rmax[i]) - arr[i]);
        }
        return res;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;

    //size of array
    cin >> n;

    int a[n];

    //adding elements to the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Solution obj;
    //calling trappingWater() function
    cout << obj.trappingWater(a, n) << endl;

    return 0;
}