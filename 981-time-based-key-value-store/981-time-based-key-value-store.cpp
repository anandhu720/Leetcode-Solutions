class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> umap;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        umap[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string res;
        int left = 0,right = umap[key].size()-1;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(umap[key][mid].first <= timestamp) {
                res = umap[key][mid].second;
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        
        return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */