#include <iostream>
using namespace std;

int objectCount = 0;

class Destruct {
public:
    Destruct() {
        objectCount++;
        cout << "Object created. Total objects: " << objectCount << endl;
    }

    ~Destruct() {
        objectCount--;
        cout << "Object destroyed. Remaining objects: " << objectCount << endl;
    }
};

int main() {
    Destruct a, b, c, d, e;
    cout << "Exiting main, objects will now be destroyed automatically..." << endl;
    return 0;
}
