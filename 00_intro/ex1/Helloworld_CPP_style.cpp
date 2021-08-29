#include <iostream>

//#define use_namespace 
#ifdef use_namespace
using namespace std;
#endif

int main(void)
{
#ifdef use_namespace
    cout << "Hello World"<< endl;
#else
    std::cout << "Hello World"<< std::endl;
#endif
    return 0;
}