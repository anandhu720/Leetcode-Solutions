class TextEditor {
    deque<char> left;
    deque<char> right;
public:
    TextEditor() {
        
    }
    
    void addText(string text) {
        left.insert(left.end(),text.begin(),text.end());
    }
    
    int deleteText(int k) {
        int d = 0;
        while(k and !left.empty()) {
            left.pop_back();
            d++;
            k--;
        }
        
        return d;
    }
    
    string cursorLeft(int k) {
        while(k-- and !left.empty()) {
            right.insert(right.end(),left.back());
            left.pop_back();
        }
        
        return cursorShiftString();
    }
    
    string cursorRight(int k) {
        while(k-- and !right.empty()) {
            left.insert(left.end(),right.back());
            right.pop_back();
        }
        
        return cursorShiftString();
    }
    
    string cursorShiftString() {
        return string(max(left.end()-10,left.begin()),left.end());
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */