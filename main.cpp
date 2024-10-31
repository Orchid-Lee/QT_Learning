#include <iostream>
#include <thread>

using namespace std;

void printMsg(int count)
{
    for (size_t i = 0; i < count; i++)
    {
        cout << "Hello from thread (function pointer)!" << endl;
    }
}

class PrintMsg
{
public:
    void operator()(int count) const
    {
        for (size_t i = 0; i < count; i++)
        {
            cout << "Hello from thread (function obj)!" << endl;
        }
    }
};

int main()
{
    thread t1(printMsg, 5);
    t1.join();

    thread t2(PrintMsg(), 5);
    t2.join();

    thread t3([](int count)
    {
        for (size_t i = 0; i < count; i++)
        {
            cout << "Hello from thread (function 3)!" << endl;
        }
    }, 5);
    t3.detach();
    return 0;
}