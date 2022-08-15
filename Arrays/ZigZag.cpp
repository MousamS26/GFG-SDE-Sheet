//Given an array Arr (distinct elements) of size N.
//Rearrange the elements of array in zig-zag fashion.
//The converted array should be in form a < b > c < d > e < f.
//The relative order of elements is same in the output i.e you have to iterate on the original array only.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void zigZag(int arr[], int n) {
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (flag)
            {
                if (arr[i] < arr[i + 1])
                    swap(arr[i], arr[i + 1]);
            }
            else
            {
                if (arr[i] > arr[i + 1])
                    swap(arr[i], arr[i + 1]);
            }
            flag = !flag;
        }
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution ob;
    ob.zigZag(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
// } Driver Code Ends