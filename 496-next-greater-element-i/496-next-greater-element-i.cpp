class Solution {
public:
    void find(vector<int> &nums,unordered_map<int,int> &umap) {
        stack<int> st;
        st.push(0);
        int i=1;
        while(i < nums.size()){
            if(st.empty() or nums[i] < nums[st.top()]){
                st.push(i);
                i++;
            }else{
                umap[nums[st.top()]] = nums[i];
                st.pop();
            }
        }
        
        while(!st.empty()){
            umap[nums[st.top()]] = -1;
            st.pop();
        }
    }
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        find(nums2,umap);
        
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(umap[nums1[i]]);
        }
        
        return ans;
    }
};