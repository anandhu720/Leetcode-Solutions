if(st.empty()) left[i] = 0;
else left[i] = st.top() + 1;
st.push(i);
}
while(!st.empty()) st.pop();
for(int i=n-1;i>=0;i--) {
while(!st.empty() and heights[st.top()] >= heights[i])
st.pop();
if(st.empty()) left[i] = (n-1) - left[i];
else left[i] = (st.top() - 1) - left[i];
st.push(i);
}
int maxA = 0;
for(int i=0;i<n;i++) {
maxA = max(maxA,heights[i] * (left[i] + 1));
}
return maxA;
}
};
```