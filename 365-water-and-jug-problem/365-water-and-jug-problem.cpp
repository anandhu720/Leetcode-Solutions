class Solution {
public:
    bool canMeasureWater(int jug1, int jug2, int target) {
        int x = gcd(jug1,jug2);
        
        return target%x == 0 and target <= jug1+jug2;
    }
    int gcd(int a, int b)
    {
        // Everything divides 0
        if (a == 0)
            return b;
        if (b == 0)
            return a;
  
        // base case
        if (a == b)
            return a;
  
        // a is greater
        if (a > b)
            return gcd(a-b, b);
        return gcd(a, b-a);
    }
};