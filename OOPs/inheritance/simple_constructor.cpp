#include <iostream>
using namespace std;

class SimpleClass {
    private:
        int x;
        int y;

    public:
        // Simple constructor to initialize x and y
        SimpleClass(int a, int b) {
            x = a;
            y = b;
        }

        void display() {
            cout << "x = " << x << ", y = " << y << endl;
        }
};

int main() {
    // Create object with constructor
    SimpleClass obj(10, 20);
    obj.display();

    return 0;
}
