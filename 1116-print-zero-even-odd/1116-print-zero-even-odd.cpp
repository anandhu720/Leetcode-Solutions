class ZeroEvenOdd {
private:
    mutex m;
    condition_variable cv;
    int n;
    int i;
    int flag;
public:
    ZeroEvenOdd(int n) {
        this->n = n;
        this->i = 0;
        this->flag = 0;
    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        while(i <= n) {
            unique_lock<mutex> lock(m);
            while(i <= n and flag != 0) {
                cv.wait(lock);
            }
            
            if(i<n)
                printNumber(0);
            i++;
            if(i%2 == 0) flag = 2;
            else flag = 1;
            cv.notify_all();
        }
    }

    void even(function<void(int)> printNumber) {
         while(i <= n) {
            unique_lock<mutex> lock(m);
            while(i <= n and flag != 2) {
                cv.wait(lock);
            }
            
            if(i<=n)
                printNumber(i);
            flag = 0;
            cv.notify_all();
        }       
    }

    void odd(function<void(int)> printNumber) {
        while(i <= n) {
            unique_lock<mutex> lock(m);
            while(i <= n and flag != 1) {
                cv.wait(lock);
            }
            
            if(i<=n)
                printNumber(i);
            flag = 0;
            cv.notify_all();
        }        
    }
};