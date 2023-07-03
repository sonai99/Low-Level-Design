#include <iostream>

class MyClass {
private:
    int myPrivateVariable;

public:
    MyClass(int value) {
        myPrivateVariable = value;
    }

    void printPrivateVariable() {
        std::cout << "Private Variable: " << myPrivateVariable << std::endl;
    }
};

int main() {
    MyClass obj(42);
    obj.printPrivateVariable();

    return 0;
}
