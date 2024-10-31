#include <iostream>

using namespace std;

class MyExc : public exception
{
    const char* what() const throw()
    {
        return "Nullpointer exception";
    }
};

int main()
{
    try
    {
        throw MyExc();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
