// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

void preorderTraversal(Node* root)
{
	if (!root)return;
	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right); 
}

Node* constructBst(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        Node *root = constructBst(arr, n);
        preorderTraversal(root);
        cout<<endl;
    }
	return 0; 
}// } Driver Code Ends


//User function Template for C++


Node* constructBst(int arr[], int n)
{
   // Code here
   
   Node* root = new Node(arr[0]);
   queue<pair<Node*, pair<int,int>>>q;
   q.push({root,{INT_MIN,INT_MAX} });
   int i=1;
   while(q.empty()==false && i<n){
       auto curr = q.front();
       q.pop();
       if(arr[i]<curr.first->data && arr[i]>curr.second.first){
           curr.first->left = new Node(arr[i]);
       q.push({curr.first->left,{ curr.second.first, curr.first->data}} );
       i++;
       }
       
       if(i<n && arr[i]>curr.first->data && arr[i]<curr.second.second){
           curr.first->right = new Node(arr[i]);
       q.push({curr.first->right, { curr.first->data,curr.second.second}});
       i++;
       }
       
       
       
   }
   return root;
}