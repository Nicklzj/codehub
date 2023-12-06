#include <iostream>
#include<string.h>
using namespace  std;
int main(){
   // bool vis[111111]={false};
    bool *vis=new bool[111111];
     memset(vis,false,sizeof(vis));
    //fill(vis,vis+100000,false);
    vector<int> v;
    for (int i = 2; i <= 10000; ++i) {

        if(!vis[i])
        {
            v.push_back(i);
            //cout<<i<<endl;
        }

        for(int k=2;k*i<=10000;k++){
            vis[k*i]= true;
        }


    }

    for (int (i) = 0; (i) < v.size(); ++(i)) {
            cout<<v[i]<<endl;
    }



}