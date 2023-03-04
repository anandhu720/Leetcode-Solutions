class Semaphore {
private:
    mutex m;
    condition_variable cv;
    int count;
public:
    void setCount(int count) {
        this->count = count;
    }
    
    void wait() {
        unique_lock<mutex> lock(m);
        count--;
        while(count < 0) {
            cv.wait(lock);
        }
    }
    
    void signal() {
        unique_lock<mutex> lock(m);
        count++;
        cv.notify_all();
    }
    
};
class DiningPhilosophers {
private:
    Semaphore fork[5];
    mutex m;
public:
    DiningPhilosophers() {
        for(int i=0;i<5;i++) {
            fork[i].setCount(1);
        }
    }

    void wantsToEat(int philosopher,
                    function<void()> pickLeftFork,
                    function<void()> pickRightFork,
                    function<void()> eat,
                    function<void()> putLeftFork,
                    function<void()> putRightFork) {
        {
            unique_lock<mutex> lock(m);
            fork[philosopher].wait();
            fork[(philosopher+1)%5].wait();
        }
        
        pickLeftFork();
        pickRightFork();
        
        eat();
        
        putLeftFork();
        fork[(philosopher+1)%5].signal();
        putRightFork();
        fork[philosopher].signal();
		
    }
};