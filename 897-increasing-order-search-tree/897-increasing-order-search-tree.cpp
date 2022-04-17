class Solution {
    // store the nodes in order
    queue<TreeNode*> elements;
    
    // get inorder traversal of tree
    void inorder(TreeNode *root){
        if(root==nullptr) return;
        inorder(root->left);
        elements.push(root);
        inorder(root->right);
    }
    
    // rearange the tree
    void rearrange(TreeNode *root){
        if(elements.empty()) return;
        root->right = elements.front();
        root->left = root->right->left = root->right->right = nullptr;
        elements.pop();
        rearrange(root->right);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        root = new TreeNode();
        rearrange(root);
        return root->right;
    }
};