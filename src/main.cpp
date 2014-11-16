#include <iostream>

using namespace std;

namespace B {
    class A {
    public:
        void wtf();
    };
}

void
B::A::wtf() {
    cout << "What a bad idea" << endl;
}

int main() {
    unique_ptr<B::A> wow(new B::A());
    wow->wtf();
    return 0;
}
