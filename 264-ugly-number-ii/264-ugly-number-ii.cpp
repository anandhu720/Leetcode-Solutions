class Solution {
public:
 #define ll long long int 
    int nthUglyNumber(int n) {
        set<ll> st ;
        st.insert({2,3,5}) ;
        int count = 0 ;
        if(n==1){
            return 1; 
        }
        for(auto i : st){
            st.insert(i*2) ;
            st.insert(i*3) ;
            st.insert(i*5) ;
            count++ ;
            if(count == n){
                break ;
            }
        }
        count = 0 ;
        n-- ;
        for(auto i : st){
            count++ ;
            if(count == n){
                break ;
            }
            st.erase(st.begin()) ;
        }
        return *st.begin() ;
    }
};