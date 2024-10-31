#include <iostream>
#include <thread>
#include <unistd.h>
#include <mutex>

using namespace std;

mutex mtx;

void printMsg(int& x)
{
    for (size_t i = 0; i < 50000; i++)
    {
        mtx.lock();
        x--;
        mtx.unlock();
    }
}

void printMsg1(int& x)
{
    for (size_t i = 0; i < 50000; i++)
    {
        mtx.lock();
        x++;
        mtx.unlock();
    }
}

int main()
{
    int x = 10;
    thread t2(printMsg1, ref(x));
    thread t1(printMsg, ref(x));
    
    t1.join();
    t2.join();

    cout << "x:" << x << endl;
    return 0;
}