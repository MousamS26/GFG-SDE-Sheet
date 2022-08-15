// { Driver Code Starts
// C++ program to rearrange an array in minimum
// maximum form

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n)
    {
        vector<int> v;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            v.push_back(arr[j--]);
            v.push_back(arr[i++]);
        }
        for (int i = 0; i < n; i++)
            arr[i] = v[i];
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //size of array
    int n;
    cin >> n;

    long long arr[n];

    //adding elements to the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution ob;

    //calling rearrange() function
    ob.rearrange(arr, n);

    //printing the elements
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}