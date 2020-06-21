#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string s = "";
    for (int i = 0; i < num / 100; i++)
        s += "B";
    for (int i = 0; i < (num % 100) / 10; i++)
        s += "S";
    for (int i = 0; i < num % 10; i++)
        s = s + to_string(i + 1);
    cout << s << endl;

    return 0;
}