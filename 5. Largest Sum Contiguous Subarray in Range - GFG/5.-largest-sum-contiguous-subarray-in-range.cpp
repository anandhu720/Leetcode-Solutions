// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Structure of node of the tree
struct node {
	int sum, prefixsum, suffixsum, maxsum;
};

// A Max of 1000 Node Array
node tree[4 * 1000];

// Utility funciton to build the tree
void build(int arr[], int low, int high, int index)
{
	if (low == high) {
		tree[index].sum = arr[low];
		tree[index].prefixsum = arr[low];
		tree[index].suffixsum = arr[low];
		tree[index].maxsum = arr[low];
	} else {
		int mid = (low + high) / 2;
		build(arr, low, mid, 2 * index + 1);
		build(arr, mid + 1, high, 2 * index + 2);
		tree[index].sum = tree[2 * index + 1].sum + tree[2 * index + 2].sum;
		tree[index].prefixsum = max(tree[2 * index + 1].prefixsum, tree[2 * index + 1].sum + tree[2 * index + 2].prefixsum);
		tree[index].suffixsum = max(tree[2 * index + 2].suffixsum, tree[2 * index + 2].sum + tree[2 * index + 1].suffixsum);
		tree[index].maxsum = max(tree[index].prefixsum, max(tree[index].suffixsum, max(tree[2 * index + 1].maxsum, max(tree[2 * index + 2].maxsum,tree[2 * index + 1].suffixsum + tree[2 * index + 2].prefixsum))));
	}
}


 // } Driver Code Ends
//User function Template for C++


//Function to update a value in input array and segment tree.
void update(int arr[], int arrSize, int index, int value)
{
    arr[index - 1] = value;
    return;
}


//Funciton to return the Maximum-Sum in the range.
int query(int arr[], int n, int l, int r) 
{
    int ans = arr[l - 1];
    int sum = arr[l - 1];
    for(int i = l; i < r; i++){
        sum = max(sum + arr[i] , arr[i]);
        ans = max(sum, ans);
    }
    return ans;
}

// { Driver Code Starts.

// Driver Code
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int n, q, index, value, left, right, type;
	    int* arr = NULL;
	    cin>>n>>q;
	    arr = new int[n];
	    for(int i=0; i<n; i++)cin>>arr[i];
	    build(arr, 0, n-1, 0);
	    for(int i=0; i<q; i++){
	        cin>>type;
	        if(type==1){
	            cin>>left>>right;
	            cout<<query(arr, n, left, right)<<endl;
	        } else {
	            cin>>index>>value;
	            update(arr, n, index, value);
	        }
	    }
	    delete [] arr;
	    arr = NULL;
	}
	return 0;
}
  // } Driver Code Ends