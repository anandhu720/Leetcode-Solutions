class Solution {
public:
    int countOrders(int n) {
        long long ans = 1;
        for (int i=2;i<=2*n;i++){
            ans*=i;  // calculating factorial
            
            if (i%2==0){
                ans/=2;  // simulataneously dividing my ans by 2 everytime i is even                             //                                (hence total N number of times)
            }
            ans = ans%((long long)pow(10,9)+7);  // modulo to get rid of overflow error
        }
        return ans;  
    }
};