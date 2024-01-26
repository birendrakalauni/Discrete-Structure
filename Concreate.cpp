#include <iostream>
using namespace std;

class Concrete {
public:
    Concrete(int v) : d(v) {}
    void print() { cout << "Data: " << d << endl; }
private:
    int d;
};

int main() {
    Concrete obj(42);
    obj.print();
    return 0;
}
