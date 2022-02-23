/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;
        Node *root=new Node(node->val);
		//map[existing_node]=new_node
        unordered_map<Node*,Node*> m;
        m[node]=root;
		//bfs on existing node
        queue<Node*> Q;
        Q.push(node);
        while(!Q.empty()){
            Node *cur=Q.front();
            Q.pop();
			//for every neighbor of cur node create a clone of it and push it in the m[cur]-> neighbor list
            for(Node* c:cur->neighbors){
                if(!m[c]){
                    Node *n= new Node(c->val);
                    m[c]=n;
                    Q.push(c);
                }
                (m[cur]->neighbors).push_back(m[c]);
            }
        }
        return root;
    }
};