#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void sig_handler(int sig_num)
{
    cout << "recv sig: " << sig_num << endl;
    exit(sig_num);
}

int main()
{
    int i = 0;
    signal(SIGINT, sig_handler);
    while (++i)
    {
        if (i == 3)
        {
            raise(SIGINT);
        }
        cout << "Going to sleep." << endl;
        sleep(1);
    }
    return 0;
}
