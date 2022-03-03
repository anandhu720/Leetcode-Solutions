class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int result=-1,dist=INT_MAX;
		
        for(int i=0;i<points.size();i++){
        
			if(points[i][0]==x||points[i][1]==y){
        
				int temp=abs(points[i][0]-x)+abs(points[i][1]-y);
        
				if (temp<dist){
                    result=i;
                    dist=temp;
                }
            }
        }
        return result;
    }
};