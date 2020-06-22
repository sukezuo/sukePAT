# include <iostream>
# include <string>
# include <map>
using namespace std;
int main(){
    int n,  score;
    int maxs = 0, mins = 101;
    string s,name,id;
    string maxname, minname, maxid, minid;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> name >> id >> score;
        if (score>maxs){
            maxname=name;
            maxid=id;
            maxs=score;
        }
        if (score < mins)
        {
            minname = name;
            minid = id;
            mins = score;
        }
    }
    cout << maxname << " " << maxid << endl;
    cout << minname << " " << minid << endl;
}