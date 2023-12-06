#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string tempstr;

    getline(cin,tempstr);
    N=atoi(tempstr.c_str());
    int prev=-1;
    while (N--)
    {
        string str;
        string substr;
        vector<int>v;

        //cin.getline(str,sizeof(str));
         getline(cin,str);

        int i,j;
        for ( i = 0; i < str.length(); i=j+1)
        {
            /* code */
            for ( j = i+1; j <str.length(); j++)
            {
                if(str[j]==' ') break;

            }
            //cout<<j<<" ";
            string substr= str.substr(i,j);
            if(j==1&&(str[0]>='a'&&str[0]<='z')){
                prev=str[0]-'a';
                continue;
            }
            v.push_back(atoi(substr.c_str()));


        }
        char ch=' ';
        int res=-1;
        if(prev==0) {ch='+';res=v[0]+v[1];}
        if(prev==1) {ch='-';res=v[0]-v[1];}
        if(prev==2 ) {ch='*';res=v[0]*v[1];}
        string sttttt=to_string(v[0])+(ch)+to_string(v[1])+"="+to_string(res);
        cout<<sttttt<<endl;
        cout<<sttttt.length()<<endl;
    }
    


    return 0;
}