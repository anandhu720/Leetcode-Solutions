class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& a) {
        int n = a.size(), h , k =0;
        
        h = (n+1)/2;
        int count = (h+k);
        int ans  = count*a[0], j=-1;
        
        for(int i=1;i<n;i++)
        {
            if(i%2!=0)
              j++;  
            k = (h+k-1-j);
            h = (n-i+1)/2;
			count = h+k;
            ans += count*a[i];
        }
        
        
       return ans; 
    }
};