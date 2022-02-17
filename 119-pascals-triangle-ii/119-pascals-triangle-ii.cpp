class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        long com = 1;    result.push_back(1);
        
        for(int i = 0; i < rowIndex; i++) {
            com *= (rowIndex - i);
            com /= (i + 1);
            result.push_back((int)com);
        }
        
        return result;   
    }
};