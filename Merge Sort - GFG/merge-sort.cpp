//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         int n1 = m + 1;
         int n2 = r + 1;
         
         int i = l,j = m+1;
         vector<int> tmp;
         
         while(i < n1 and j < n2) {
             if(arr[i] < arr[j]) {
                 tmp.push_back(arr[i]);
                 i++;
             }else{
                 tmp.push_back(arr[j]);
                 j++;
             }
         }
         
         for(;i<n1;i++) tmp.push_back(arr[i]);
         for(;j<n2;j++) tmp.push_back(arr[j]);
         
         i=l;
         for(int k=0;k<tmp.size();k++) arr[i++] = tmp[k];
         
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l < r) {
            int mid = (l + r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends