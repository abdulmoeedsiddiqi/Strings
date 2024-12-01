#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Abdul Moeed ";
    int s = 0;
    int e = str.length() - 1;
    cout << "Original string: " << str << endl;
    while (s < e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }

    cout << "Reversed String: " << str << endl;
    return 0;
}