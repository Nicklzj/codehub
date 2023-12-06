#include<iostream>
#include<string>
#include<vector>
using namespace std;
void fogsolve(string &x) {
for (size_t i = 0; i < x.length(); i++)
{
if (x[i] >= 'A' && x[i] <= 'Z') {
x[i] = x[i] + 32;
}
}
}
vector<int>sv;
int spacenum=0;
int main() {
string str1;
string str2;
vector<string>v;
getline(cin, str1);
getline(cin, str2);
fogsolve(str2);
fogsolve(str1);

//auto findstringres=find(str2.begin(), str2.end(), str1);
int cnt = -1;
int res = 0;
//int findstringres = str2.find(str1);
//cout << findstringres << endl;
/**
while (cnt=(str2.find(str1, cnt + 1))&& cnt !=str2.npos) {
res++;
}
cout << res << endl;
int i,j;
**/
int i,j;
for( i=0;i<str2.length();)//记录每一个单词
{

        for(j=i;j<str2.length();j++)
        {
                if(str2[j]==' ' ){
                    spacenum++;
                    
                    break;  
                }
                     

        }
        if(i!=j){
        sv.push_back(spacenum-1);
        v.push_back(str2.substr(i,j-i));
        }
        i=j+1;

} 


int fast=-1;
for(i=0;i<v.size();i++){
    if(str1==v[i]){
    if(fast==-1){
    fast=0;
    fast+=sv[i];
    for(int k=0;k<i;k++){
    fast+=v[k].size();
    }
    res++;
    }
    else
    {
    res++;
    }
    }
}
    // cout<<fast<<" ";
    if(res!=0) 
    cout<<res<<" ";
    cout<<fast<<endl;
return 0;
}
