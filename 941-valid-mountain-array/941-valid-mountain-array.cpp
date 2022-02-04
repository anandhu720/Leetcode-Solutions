class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        bool peakReached = false;
        
        for(int i=0;i<arr.size()-1;i++){
            if(peakReached == false){
                if(arr[i+1] == arr[i] || (arr[i+1] < arr[i] && i == 0)) return false;
                if(arr[i+1] < arr[i]) peakReached = true;
            }else{
                if(arr[i+1] >= arr[i]) return false;
            }
        }
        return peakReached;
    }
};