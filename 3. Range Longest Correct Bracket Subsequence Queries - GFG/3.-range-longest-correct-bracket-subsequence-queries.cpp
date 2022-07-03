// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int pairs;
    int open;   // unused
    int closed; // unused

    Node() { pairs = open = closed = 0; }
};

int getMid(int s, int e) {
    return s + (e - s) / 2;
}

Node merge(Node leftChild, Node rightChild) {
    Node parentNode;
    int minMatched = min(leftChild.open, rightChild.closed);
    parentNode.pairs = leftChild.pairs + rightChild.pairs + minMatched;
    parentNode.open = leftChild.open + rightChild.open - minMatched;
    parentNode.closed = leftChild.closed + rightChild.closed - minMatched;
    return parentNode;
}

void constructSTUtil(string str, int ss, int se, Node* st, int si) {
    if (ss == se) {
        st[si].pairs = 0;
        if (str[ss] == '(')
            st[si].open = 1;
        else
            st[si].closed = 1;

        return;
    }

    int mid = getMid(ss, se);
    constructSTUtil(str, ss, mid, st, si * 2 + 1);
    constructSTUtil(str, mid + 1, se, st, si * 2 + 2);

    st[si] = merge(st[si * 2 + 1], st[si * 2 + 2]);
}

Node* constructST(string str, int n) {
    int x = (int)(ceil(log2(n)));

    int max_size = 2 * (int)pow(2, x) - 1;
    Node* st = new Node[max_size];

    constructSTUtil(str, 0, n - 1, st, 0);
    return st;
}


 // } Driver Code Ends
// User function template for C++

class Solution
{
    public:
    // str : given string
    // n : length of the string
    // qs and qe are L and R respectively
    // st : segment tree of the given string of Node type
    // return the maximum length of correct bracket subsequence of the sequence.
    
    //Function to returns the maximum length of correct bracket subsequence
    //between starting and ending indexes.
Node helper(Node *st, int qs, int qe, int ss, int se, int si){
       if(se<qs || qe<ss){
           Node nullNode;
           return nullNode;
       }
       if(qs<=ss && qe>=se) return st[si];
       int mid = (ss+se)/2;
       Node left = helper(st, qs, qe, ss, mid, 2*si+1);
       Node right = helper(st, qs, qe, mid+1, se, 2*si+2);
       Node res = merge(left, right);
       return res;
   }
   int getLongestSequence(Node* st, string str, int qs, int qe, int n) 
   {
       // add code here
       Node res = helper(st, qs, qe, 0, n-1, 0);
       return res.pairs *2;
   }
};

// { Driver Code Starts.

// Driver Code
int main() {
    int t;
    cin >> t;
    while (t--) {
        int query;
        string str;

        cin >> str >> query;
        int n = str.length();

        Node* st = constructST(str, n);

        int startIndex, endIndex;
        while (query--) {
            cin >> startIndex >> endIndex;
            Solution obj;
            cout << obj.getLongestSequence(st, str, startIndex, endIndex, n)
                 << endl;
        }
    }

    return 0;
}
  // } Driver Code Ends