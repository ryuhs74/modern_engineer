#include <iostream>

using namespace std;

class CHelloWorld{
    public:
    helloWorld();
};

CHelloWorld::helloWorld()
{
    cout << "Hello World"<< endl;
}


int main(void)
{
    CHelloWorld hello;

    hello.helloWorld();
    return 0;
}