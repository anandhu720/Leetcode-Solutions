class FooBar {
private:
    mutex m;
    condition_variable cv;
    int n;
    int i;

public:
    FooBar(int n) {
        this->n = n;
        this->i = 1;
    }

    void foo(function<void()> printFoo) {
        while(i <= 2*n) {
            unique_lock<mutex> lock(m);
            while(i <= 2*n and i%2 == 0) {
                cv.wait(lock);
            }
            
            if(i <= 2*n)
                printFoo();
            i++;
            cv.notify_all();
        }
        
    }

    void bar(function<void()> printBar) {
        
        while(i <= 2*n) {
            unique_lock<mutex> lock(m);
            while(i <= 2*n and i%2 != 0) {
                cv.wait(lock);
            }
            if(i <= 2*n)
                printBar();
            i++;
            cv.notify_all();
        }
    }
};