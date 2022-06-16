#include <iostream>

class Festival {
    public:
        int firework;
};

int main() {
    using namespace std;
    Festival christmas;
    christmas.firework = 100;
    cout << christmas.firework; // outputs 100%?
};