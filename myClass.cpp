#include <iostream>
#include <stdlib.h>


class School {
    public:
        std::string name;
        int age;

        void banner() {
            using namespace std;
            cout << name << " is " << age << " years old.\n";
        };

};

class Student {
    std::string name;
};

int main(){
    School codecademy;

    codecademy.name = "Codecademy";
    codecademy.age = 10;

    codecademy.banner();

    School harvard;
    School yale;

    harvard.age = 385;
    harvard.name = "Harvard";

    yale.age = 319;
    yale.name = "Yale";

    harvard.banner();
    yale.banner();

    Student clara;
    // clara.name = "Clara";
    return 0;
}