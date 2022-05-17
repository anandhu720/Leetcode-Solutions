/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void dfs(TreeNode *root,string &s) {
        if(!root){
            s += ("#,");
            return;
        }
        s += (to_string(root->val)+",");
        dfs(root->left,s);
        dfs(root->right,s);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        dfs(root,s);
        s.pop_back();
        return s;
    }
    
    TreeNode *rdfs(string &s,int &i) {
        if(i >= s.length()) return NULL;
        
        if(s[i] == '#') return NULL;
        
        
        string str = "";
        while(s[i] != ',') {
            str.push_back(s[i]);
            i++;
        }
        
        i++;
        
        cout<<str<<endl;
        
        TreeNode *root = new TreeNode(stoi(str));
        
        root->left = rdfs(s,i);
        while(s[i] != ',') i++;
        i++;
        root->right = rdfs(s,i);
        
        return root;

    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string s) {
        s.push_back(',');
        int index = 0;
        return rdfs(s,index);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;