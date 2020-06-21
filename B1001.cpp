#include <iostream>
using namespace std;
int main()
{
    int a, count = 0;
    scanf("%d", &a);
    while (a > 1)
    {
        if (a % 2 == 0)
        {
            a = a / 2;
            count = count + 1;
        }
        else
        {
            a = a * 3 + 1;
        }
    }
    printf("%d", count);
    return 0;
}