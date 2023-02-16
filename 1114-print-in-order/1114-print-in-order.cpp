class Foo {
public:
    mutex m;
    condition_variable cv;
    int flag;
    Foo() {
        flag = 1;
    }

    void first(function<void()> printFirst) {
        unique_lock<mutex> lock(m);
        while(flag != 1) {
            cv.wait(lock);
        }
        printFirst();
        flag = 2;
        cv.notify_all();
    }

    void second(function<void()> printSecond) {
        unique_lock<mutex> lock(m);
        while(flag != 2) {
            cv.wait(lock);
        }
        
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        flag = 3;
        cv.notify_all();
    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
        unique_lock<mutex> lock(m);
        while(flag != 3) {
            cv.wait(lock);
        }
        printThird();
        flag = 1;
        cv.notify_all();
    }
};