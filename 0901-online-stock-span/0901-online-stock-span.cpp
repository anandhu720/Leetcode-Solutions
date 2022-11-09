class StockSpanner {
public:
    stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        int c = 0;
        int cnt = 0;
        while(!st.empty() and price >= st.top().first) {
            c += st.top().second+1;
            cnt += st.top().second+1;
            st.pop();
        }
        
        st.push({price,c});
        
        return cnt+1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */