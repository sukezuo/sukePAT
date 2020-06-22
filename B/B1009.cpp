#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> v;
    string s;
    while (cin >> s )
        v.push(s);
    cout << v.top();
    v.pop();
    while (!v.empty())
    {
        cout << " " << v.top();
        v.pop();
    }
    return 0;
}
// 本地测试不通过，但线上通过了？ 如何判断是结尾?