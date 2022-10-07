class MyCalendar {
public:
    map<int,int> umap;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        umap[start]++;
        umap[end]--;
        
        int overlap = 0;
        
        for(auto it : umap) {
            overlap += it.second;
            
            if(overlap > 1) {
                umap[start]--;
                umap[end]++;
                return false;
            }
        }
        
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */