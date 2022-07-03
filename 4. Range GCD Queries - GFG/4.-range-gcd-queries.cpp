// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>

using namespace std;

// Function to find gcd of 2 numbers.
int gcd(int a, int b) {
    if (a < b) swap(a, b);
    if (b == 0) return a;
    return gcd(b, a % b);
}

// get mid
int getMid(int s, int e) {
    return s + (e - s) / 2;
}

// A recursive function that constructs Segment Tree for
// array[ss..se]. si is index of current node in segment
// tree st
int constructST(int arr[], int st[], int ss, int se, int si) {
    if (ss == se) {
        st[si] = arr[ss];
        return st[si];
    }
    int mid = getMid(ss, se);
    st[si] = gcd(constructST(arr, st, ss, mid, si * 2 + 1),
                 constructST(arr, st, mid + 1, se, si * 2 + 2));
    return st[si];
}

/* Function to construct segment tree from given array.
This function allocates memory for segment tree and
calls constructSTUtil() to fill the allocated memory */
int *constructSegmentTree(int arr[], int n) {
    int height = (int) (ceil(log2(n)));
    int size = 2 * (int) pow(2, height) - 1;
    int *st = new int[size];
    constructST(arr, st, 0, n - 1, 0);
    return st;
}


 // } Driver Code Ends
// User function template in C++

// st : segment tree
// n : size of the given array
// l and r : range to find gcd i.e L and R respectively


class Solution
{
    public:
   int fr(int st[], int l, int r, int ss, int se, int si){
        if(l > se || r < ss){
            return 0;
        }
        if(l <= ss && r >= se){
            return st[si];
        }
        int mid = ss + (se - ss)/2;
        return gcd(fr(st, l, r, ss, mid, 2*si + 1), fr(st, l, r, mid + 1,se, 2*si + 2));
    }
    
    int findRangeGcd(int l, int r, int st[], int n) 
    {
        return fr(st, l, r, 0, n - 1, 0);
    }
    
    //Function to update a value in input array and segment tree.
    void ud(int*arr, int st[], int ss, int se, int si, int index, int new_val){
        if(index < ss || index > se){
            return;
        }
        if(index == ss && index == se){
            st[si] = new_val;
            arr[index] = new_val;
            return;
        }
        if(ss < se){
            int mid = ss + (se - ss)/2;
            ud(arr, st, ss, mid, 2*si + 1, index, new_val);
            ud(arr, st, mid + 1, se, 2*si + 2, index, new_val);
            st[si] = gcd(st[2*si + 1], st[2*si + 2]);
        }
    }
    
    
    void updateValue(int index, int new_val, int *arr, int st[], int n) 
    {
        ud(arr, st, 0, n - 1, 0, index, new_val);
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main() {
    int t;
    cin >> t;

    while (t--) {

        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Build segment tree from given array
        int *st = constructSegmentTree(a, n);
        int type;
        while (q--) {
            // cin.ignore(INT_MAX, '\n');
            cin >> type;

            if (type == 0) {
                int l, r;
                cin >> l >> r;
                Solution obj;
                cout << obj.findRangeGcd(l, r, st, n) << endl;
            } else {
                int ind, val;
                cin >> ind >> val;
                Solution obj;
                obj.updateValue(ind, val, a, st, n);
            }
        }
    }

    return 0;
}  // } Driver Code Ends