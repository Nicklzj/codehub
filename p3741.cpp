#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int vis[111]={false};
    string s;
    cin>>s;
    int res=0;
    for (size_t i = 0; i < s.length()-1; i++)
    {
        if(s.substr(i,2)=="VK"){

            res++;
            vis[i]=true;
            vis[i+1]=true;
        }
        
    }
    for (size_t i = 0; i < s.length()-1; i++)
    {
        if(s.substr(i,2)=="VV"&&!vis[i]&&!vis[i+1]){
            res++;
            break;   
        }
         if(s.substr(i,2)=="KK"&&!vis[i]&&!vis[i+1]){
            res++;
            break;
        }
        /* code */
    }
    cout<<res<<endl;
    



    return 0;
}