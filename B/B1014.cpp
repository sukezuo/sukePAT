# include <iostream>
# include <cctype>
using namespace std;
int main(){
    string a,b,c,d;
    char W,H;
    cin >>a>>b>>c>>d;
    int i=0;
    while (i < a.size() && i < b.size())
    {
        if (a[i] == b[i] && a[i] >= 'A' && a[i] <= 'G')
        {
            W = a[i];
            break;
        }
        i++;
    }
    i++;
    while (i < a.size() && i < b.size())
    {
        if (a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N')||isdigit(a[i])))
        {
            H = a[i];
            break;
        }
        i++;
    }
    i=0;
    while (i < c.size() && i < d.size())
    {
        if (c[i] == d[i] && isalpha(c[i]))break;
        i++;
    }
    string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
    cout <<week[W-'A'];
    int h = isdigit(H)?H-'0':H-'A'+10;
    printf("%02d:%02d",h,i);
    return 0;
}