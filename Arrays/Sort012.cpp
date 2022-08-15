// Given an array of size N containing only 0s, 1s, and 2s
// sort the array in ascending order.
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        int c0(0), c1(0), c2(0);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                c0++;
            else if (a[i] == 1)
                c1++;
            else if (a[i] == 2)
                c2++;
        }
        for (int i = 0; i < n; ++i)
        {
            if (c0 > 0) {
                a[i] = 0; c0--;
            }
            else if (c1 > 0) {
                a[i] = 1; c1--;
            }
            else {
                a[i] = 2; c2--;
            }
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
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Solution ob;
    ob.sort012(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i]  << " ";
    }

    cout << endl;
    return 0;
}