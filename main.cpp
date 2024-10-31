#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char data[100];
    ofstream ofstream;
    ofstream.open("/home/moon/project_folder/c_plus/test.txt", ios::out | ios::trunc);
    cout << "write to the file" << endl;
    cout << "Enter your name:";
    cin.getline(data, 100);
    ofstream << data << endl;
    ofstream.close();

    ifstream ifstream;
    ifstream.open("/home/moon/project_folder/c_plus/test.txt");
    cout << "read the file." << endl;
    ifstream >> data;
    ifstream.close();
    cout << "data:" << data << endl;
    return 0;
}
