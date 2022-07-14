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

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ser = "";
        
        if(!root) return ser;
        
        queue<TreeNode *> q;
        q.push(root);
        
        ser += to_string(root->val);
        ser.push_back(',');

        
        while(!q.empty()) {
            TreeNode * temp = q.front(); q.pop();
            
            if(temp->left) {
                ser += to_string(temp->left->val);
                ser.push_back(',');  
                q.push(temp->left);
            }else{
                ser += "#,";                  
            }
            
            if(temp->right) {
                ser += to_string(temp->right->val);
                ser.push_back(',');  
                q.push(temp->right);
            }else{
                ser += "#,";                  
            }
        }
        
        ser.pop_back();
        
        return ser;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.length() == 0) return NULL;
        
        stringstream s(data);
        string str;
        getline(s,str,',');
        
        TreeNode *root = new TreeNode(stoi(str));
        
        queue<TreeNode *> q;
        
        q.push(root);
        
        while(!q.empty()) {
            TreeNode *temp = q.front(); q.pop();
            
            // left node
            getline(s,str,',');
            if(str == "#") {
                temp->left = NULL;
            }else{
                temp->left = new TreeNode(stoi(str));
                q.push(temp->left);
            }
            
            // right node
            getline(s,str,',');
            if(str == "#") {
                temp->right = NULL;
            }else{
                temp->right = new TreeNode(stoi(str));
                q.push(temp->right);
            }
        }
        
        
        return root;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));