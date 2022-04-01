class Solution {
public:
    bool isUgly(int n) {
         if(n==0) return false; //corner case
        while(n%2==0) n/=2; // divide the number by 2 till it's dividable by 2
        while(n%3==0) n/=3; //divide the number by 3 till it's dividable by 3
        while(n%5==0) n/=5; // divide the number by 5 till it's dividable by 5
        return n==1; // check the number is 1 now, if it's not, then it has prime factors
		                        // other than 2, 3 and 5.
    }
};