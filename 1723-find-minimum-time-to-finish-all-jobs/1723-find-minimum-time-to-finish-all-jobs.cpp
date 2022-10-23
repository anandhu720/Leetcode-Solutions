class Solution {
public:
    int minimumTimeRequired(vector<int>& jobs, int k) {
        int sum = 0;
        for(int j:jobs)
            sum += j;
        sort(jobs.begin(),jobs.end(),greater<int>());
        int l = jobs[0], r = sum;
        int res = 0;
        while(l<=r){
            int mid = (l+r)/2;
            vector<int> worker(k,0);
            if(dfs(jobs,worker,0,mid)) {
                res = mid;
                r = mid - 1;
            }else
                l = mid + 1;
        }
        return res;
    }
    bool dfs(vector<int>& jobs, vector<int>& worker, int step, int target){
        if(step>=jobs.size())
            return true;
        int cur = jobs[step];
        for(int i=0;i<worker.size();i++){
            if(worker[i] + cur <= target){
                worker[i] += cur;
                if(dfs(jobs,worker,step+1,target))
                    return true;
                worker[i] -= cur;
            }
            if(worker[i]==0)
                break;
        }
        return false;
    }
};