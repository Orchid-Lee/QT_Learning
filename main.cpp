#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class MyE : public exception
{
    const char* what() const throw()
    {
        return "C++ exception";
    }
};

int main()
{
    throw MyE();
    return 0;
}
