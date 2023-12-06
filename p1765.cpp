#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    map<char,int>m;
    for(int i=2;i<=6;i++){
        for (int j = 1; j <= 3; j++)
        {
            m.insert(make_pair('a'+(i-2)*3+j-1,j));
        }
        
    }
    for (int j = 1; j <= 3; j++)
    {
        m.insert(make_pair('t'+j-1,j));
    }
    for (int j = 1; j <= 4; j++)
    {
        m.insert(make_pair('p'+j-1,j));
    }
    for (int j = 1; j <= 4; j++)
    {
        m.insert(make_pair('w'+j-1,j));
    }
    m.insert(make_pair(' ',1));
    // for (auto tt:m)
    // {
    //     cout<<tt.first<<" "<<tt.second<<endl;
    // }
    int res=0;
    for(auto sss:str){
            res+=m[sss];
            //cout<<sss<<endl;
    }
    cout<<res<<endl;
    return 0;
}