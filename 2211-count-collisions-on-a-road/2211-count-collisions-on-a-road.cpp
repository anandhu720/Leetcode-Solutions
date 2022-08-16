class Solution {
public:
    int countCollisions(string dir) {
        int carsFromRight = 0;
        int n = dir.size();
        int res = 0;
        
        int i = 0;
        while(i < n and dir[i] == 'L') i++;
        
        for(;i<n;i++) {
            if(dir[i] == 'R') carsFromRight++;
            else{
                res += (dir[i] == 'S') ? carsFromRight : carsFromRight + 1;
                carsFromRight = 0;
            }
        }
        
        return res;
    }
};

