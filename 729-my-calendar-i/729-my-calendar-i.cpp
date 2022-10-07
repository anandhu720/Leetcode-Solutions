class SGTree {
public:
    int start = 0,end = 0;
    SGTree *left = NULL,*right = NULL;
    
    SGTree(int x,int y) {
        start = x;
        end = y; 
    }
};
class MyCalendar {
public:
    SGTree *root;
    MyCalendar() {
        root = new SGTree(0,0);
    }
    
    bool checkBook(SGTree *root,int target_s,int target_e) {
        
        int start = root->start;
        int end = root->end;
        
        if(target_e <= start) {
            
            if(root->left == NULL) {
                SGTree *tmp = new SGTree(target_s,target_e);
                root->left = tmp;
                return true;
            }
            
            return checkBook(root->left,target_s,target_e);
            
        }
        
        if(target_s >= end) {
            if(root->right == NULL) {
                SGTree *tmp = new SGTree(target_s,target_e);
                root->right = tmp;
                return true;
            }
            
            return checkBook(root->right,target_s,target_e);
            
        }
        
        return false;
        
    }
    
    bool book(int start, int end) {
        SGTree *p = root;
        return checkBook(p,start,end);
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */