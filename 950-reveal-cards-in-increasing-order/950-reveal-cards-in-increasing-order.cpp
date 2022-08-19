class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        
        queue<int> q;
        for(int i=0;i<deck.size();i++) q.push(i);
        
        vector<int> ans(deck.size(),-1);
        for(int i=0;i<deck.size();i++) {
            int index = q.front(); q.pop();
            ans[index] = deck[i];
            int back = q.front(); q.pop();
            q.push(back);
        }
        
        return ans;
    }
};