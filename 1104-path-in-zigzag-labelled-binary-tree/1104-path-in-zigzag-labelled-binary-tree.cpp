class Solution {
public:
    vector<int> ans;
    vector<int> pathInZigZagTree(int label) {
        dfs(label);
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    void dfs(int label) {
        
        if(label == 1) {
            ans.push_back(label);
            return;
        }
        
        ans.push_back(label);

        int depth = log2(label);
        int startNode = pow(2,depth);  //8
        int lastNode = 2*startNode - 1; //15
        
        // cout<<startNode<<" "<<lastNode<<endl;
        
        int cnt = 1;
        if(depth%2 == 0) { // even depth
            int j=0;
           for(int i=startNode;i<=lastNode;i++) {
               j++;
               if(i == label) break;
               if(j%2 == 0) cnt++; 
           }     
        }else{  //odd depth
            int j=0;
           for(int i=lastNode;i>=startNode;i--) {
               j++;
               if(i == label) break;
               if(j%2 == 0) cnt++; 
           } 
        }
        
        int parent_depth = depth-1;
        int sNode = pow(2,parent_depth);
        int lNode = 2*sNode - 1;
        
        if(parent_depth%2 == 0) {
            int j=1;
            for(int i=sNode;i<=lNode;i++) {
                if(j == cnt) {
                    dfs(i);
                }
                j++;
            }
        }else{
            int j=1;
            for(int i=lNode;i>=sNode;i--) {
                if(j == cnt) {
                    dfs(i);
                }
                j++;
            } 
        }
        
    }
};