#include<iostream>
#include<string>
#include<vector>
bool vis[111]={false};
std::vector<int>v(100);
using namespace std;
bool prime(int x){
    if(x==0||x==1) return false;
    for (int i = 2; i < sqrt(x); i++)
    {
        /* code */
        if (x%i==0)
        {
            return false;
        }
        

    }
    return true;
    
}
int main()
{

        string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            int index=str[i]-'0';
            ++v[index];
        }
        int maxx=-99999,minn=111111;
        for (size_t i = 0; i < v.size(); i++)
        {
            /* code */
            if(v[i]!=0&&maxx<v[i]){
                maxx=max(maxx,v[i]);
            }
            if(v[i]!=0&&minn>v[i]){
                minn=min(minn,v[i]);
            }
        }
        if(prime(maxx-minn)){
            cout<<"Lucky Word"<<endl;
            cout<<maxx-minn<<endl;
        }
        else {
            cout<<"No Answer"<<endl;
            cout<<0<<endl;
        }
        
        return 0;
}