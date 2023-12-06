#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    int res=0;
    for (size_t i = 0; i < s.length(); i++)
    {
        /* code */
        if(s[i]==' ') continue; 
        res++;
    }
    
    cout<<res<<endl;

    return 0;
}