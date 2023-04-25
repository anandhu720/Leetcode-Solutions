class SmallestInfiniteSet {
public:
    int cnt;
    set<int> s;
    SmallestInfiniteSet() {
        cnt = 1;
    }
    
    int popSmallest() {
        if(s.size() > 0 and *s.begin() < cnt) {
            int num = *s.begin();
            s.erase(num);
            return num;
        }
        int x = cnt;
        cnt++;
        return x;
    }
    
    void addBack(int num) {
        if(num < cnt) s.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */