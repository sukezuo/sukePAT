# include <iostream>
# include <vector>
using namespace std;

bool isp(int num){
    if(num%2==0 && num!=2)return false;
    for(int i=3;i*i<=num;i=i+2){
        if(num%i==0)
            return false;
    }
    return true;
}

int main(){
    int n, m, count = 0, num = 2;
    cin >> m >> n;
    vector <int> v;
    while (count < n){
        if (isp(num))
        {
            count++;
            if (count >= m)
                v.push_back(num);
        }
        num++;
    }
    count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        count++;
        if (count % 10 != 1)
            printf(" ");
        printf("%d", v[i]);
        if (count % 10 == 0)
            printf("\n");
    }
        return 0;
}
