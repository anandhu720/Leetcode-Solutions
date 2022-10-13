class Node {
public:
    Node *links[26];
    bool end = false;
    
    void add(char c,Node *node) {
        links[c-'a'] = node;
    }
    
    bool contains(char c) {
        return links[c-'a'] != NULL;
    }
    
    Node* get(char c) {
        return links[c-'a'];
    }
    
    bool isEnd() {
        return end;
    }
    
    void setEnd() {
        end = true;
    }
}*root;
class Solution {
public:
    vector<string> ans;
    vector<int> grad = {0,1,0,-1,0};
    int len = 0;
    void insert(string &s) {
        Node *pointer = root;
        for(char c : s) {
            if(!pointer->contains(c)) pointer->add(c,new Node());
            pointer = pointer->get(c);
        }
        
        pointer->setEnd();
    }
    
    bool isEmpty(Node *pointer) {
        for(char c='a';c<='z';c++) {
            if(pointer->contains(c)) return false;
        }
        return true;
    }
    
    Node *remove(Node *pointer,string key,int depth = 0) {
        if(!pointer) return NULL;
        
        if(depth == key.size()) {
            
            if(pointer and pointer->isEnd() == true) {
                pointer->end = false;
            }
            
            if(pointer and isEmpty(pointer)) {
                delete (pointer);
                pointer = NULL;
            }
            
            return pointer;
        }
        
        int index = key[depth] - 'a';
        pointer->links[index] = remove(pointer->links[index],key,depth+1);
        
        if(pointer and isEmpty(pointer) and pointer->isEnd() == false) {
            if(pointer == root) root = new Node();
            delete (pointer);
            pointer = NULL;
        }
        
        return pointer;
    }
    
    int search(string s) {
        Node *pointer = root;
        for(char c : s) {
            if(!pointer->contains(c)) {
                return 2;
            }
            pointer = pointer->get(c);
        }
        
        return pointer->isEnd() ? 1 : 0;
    }
    
    void dfs(int i,int j,string &s,vector<vector<char>> &board) {
        
        int m = board.size(),n = board[0].size();
        if(i < 0 or i >= m or j < 0 or j >= n or board[i][j] == 'X') return;
        
        s.push_back(board[i][j]);
        
        int x = search(s);
        if(x == 2) {
            s.pop_back();
            return;
        }
        
        if(x == 1) {
            ans.push_back(s);
            Node *pointer = root;
            remove(pointer,s);
        }
        
        board[i][j] = 'X';
        for(int k=0;k<4;k++) {
            int r = i + grad[k];
            int c = j + grad[k+1];
            dfs(r,c,s,board);
        }
        board[i][j] = s.back();
        s.pop_back();
        
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        root = new Node();
        len = words.size();
        for(auto it : words) {
            insert(it);
        }
        
        for(int i=0;i<board.size();i++) {
            for(int j=0;j<board[0].size();j++) {
                string s;
                dfs(i,j,s,board);
            }
        }
        
        return ans;
    }
};