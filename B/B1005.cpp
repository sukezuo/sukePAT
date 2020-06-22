#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[10000];
bool cmp(int a, int b) { return a > b; }
int main()
{
    int n, num, flag = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v[i] = num;
        while (num != 1)
        {
            if (num % 2 != 0)
                num = 3 * num + 1;
            num = num / 2;
            if (arr[num] == 1)
                break;
            arr[num] = 1;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        if (arr[v[i]] == 0)
        {
            if (flag == 1)
                cout << " ";
            flag = 1;
            cout << v[i];
        }
    }
    return 0;
}

// 有一个疑惑 为什么7和22可以同时出现还是对的
// 为什么要用算法重新排序一下？ 