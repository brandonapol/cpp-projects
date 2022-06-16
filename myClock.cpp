#include <iostream>

class Clock {
    private:
        int time = 1200;

    public:
        int getTime(){
            return time;
        };
    
    void setTime(int new_time){
        time = new_time;
    };
};

int main() {
    Clock alarm;
    std::cout << alarm.getTime() << '\n';
    alarm.setTime(930);
    std::cout << alarm.getTime() << '\n';
}