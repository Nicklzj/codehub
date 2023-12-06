#include<iostream>
#include<vector>
using namespace std;
int N;
int main()
{
    cin>>N;
    vector<string>v;
    while (N--)
    {
        
        //char *s;
       string str;
       cin>>str;
        if (str=="touch")
        {
            
            string filestr;
            cin>>filestr;
            auto tt=find(v.begin(),v.end(),filestr);
            {
                if (tt==v.end())
                {
                    /* code */
                     v.push_back(filestr);
                }
                
               
            }
            
            
        }
        else if (str=="rm")
        {
            string filestr;
            cin>>filestr;
            auto tt=find(v.begin(),v.end(),filestr);
            {
                if (tt==v.end())
                {
                    /* code */
                     continue;
                }
                
               
            }
            v.erase(tt);
        }
        
        else if (str=="rename")
        {
            string filestr;
            cin>>filestr;
            string nname;
            cin>>nname;
            auto tt =find(v.begin(),v.end(),filestr);
            {
                if ( tt==v.end())
                {
                    continue;
                }
                
                    
            }
           // auto tt=find(v.begin(),v.end(),filestr);
           // cout<<*tt<<endl;
             *tt=nname;
            
        }
        else if(str=="ls")
        {
            for (auto d:v)
            {
                cout<< d <<endl;
            }
        }                    
    }
    


    return 0;
}

