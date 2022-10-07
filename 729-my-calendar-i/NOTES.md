}
if(target_s >= end) {
if(root->right == NULL) {
SGTree *tmp = new SGTree(target_s,target_e);
root->right = tmp;
return true;
}
return checkBook(root->right,target_s,target_e);
}
return false;
}
bool book(int start, int end) {
SGTree *p = root;
return checkBook(p,start,end);
}
};
​
/**
* Your MyCalendar object will be instantiated and called as such:
* MyCalendar* obj = new MyCalendar();
* bool param_1 = obj->book(start,end);
*/
```