class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveBill = 0;
        int tenBill = 0;
        
        for(int i=0;i<bills.size();i++) {
            if(bills[i] == 5) fiveBill++;
            else if(bills[i] == 10) {
                tenBill++;
                fiveBill--;
            }else {
                if(tenBill > 0) {
                    tenBill--;
                    fiveBill--;
                }else{
                    fiveBill -= 3;
                }
            }
            if(fiveBill < 0) return false;
        }
        
        return true;
    }
};