#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream MyFile("newfile1.txt");
    MyFile << "Checking if its writing to the file  or not more check";
    MyFile.close();
}