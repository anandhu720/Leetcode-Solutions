class H2O {
private:
    mutex m;
    condition_variable cv;
    int flag;
public:
    H2O() {
        flag = 1;
    }

    void hydrogen(function<void()> releaseHydrogen) {
        unique_lock<mutex> lock(m);
        while(flag == 3) {
            cv.wait(lock);
        }
        releaseHydrogen();
        flag += 1;
        cv.notify_all();
    }

    void oxygen(function<void()> releaseOxygen) {
        unique_lock<mutex> lock(m);
        while(flag != 3) {
            cv.wait(lock);
        }
        releaseOxygen();
        flag = 1;
        cv.notify_all();
    }
};