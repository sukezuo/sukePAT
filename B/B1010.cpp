# include <iostream>
using namespace std;
int main(){
    int a,b,f=0;
    while (cin >> a >> b){
        if(b != 0){
            if(f==1)cout<<" ";
            cout << a * b <<" "<< b - 1;
            f = 1;
        }
    }
    if(f==0)cout<<"0 0";
    return 0;
}

//3 4 -5 2 6 1 -2 0
