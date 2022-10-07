class MyCalendarThree {
public:
    map<int,int> umap;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        umap[start]++;
        umap[end]--;
        
        int overlap = 0;
        int ans = 0;
        for(auto it : umap) {
            overlap += it.second;
            
            ans = max(ans,overlap);
        }
        
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */