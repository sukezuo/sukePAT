# include <iostream>
using namespace std;
int main(){
    long long a,b,c;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        if(a+b>c)
            cout << "Case #" << i + 1 << ": "
                 << "ture" << endl;
        else
            cout << "Case #" << i + 1 << ": "
                 << "false" << endl;
    }
    return 0;
}

// 考点longlong数据结构的范围，简单题