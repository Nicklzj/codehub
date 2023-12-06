#include<iostream>
#include<set>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string teststr="chuanzhi";
    set<int>s;
    int num=0;
    if(str.length()<7){
        cout<<"0";
        return 0;
    }
    for (size_t i = 0; i <=str.length()-teststr.length(); i++)
    {
        //cout<<str.substr(i,teststr.length())<<endl;
        if(teststr==str.substr(i,teststr.length()))
        {
            num++;
        }
        /* code */
    }
    cout<<num;


    return 0;
}