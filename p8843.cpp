#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > vec(100,vector<int>(1
));

int main(){
    int m,n;
    std::cin>>m>>n;
    while (m--)
    {
        //int a[1111]={0};
        //vector<vector< <(int)> > vec(100);
        int door;
        std::cin>>door;
        if (door==1)
        {
             int count;
             std::cin>>count;
             for (size_t i = 0; i < count; i++)
             {
                int index=-1,value;
                std::cin>>index>>value;
                vec[index].push_back(value);
               // cout<<"aaa="<<vec[index][1]<<endl;;
                /* code  
                 */
             }
             
        }
        else if (door==2)
        {

            int index=1;
            int left,right;
            std::cin>>index>>left>>right;
            int res=0;
            for (auto t=vec[index].begin();t!=vec[index].end(); t++)
            {
                // 
                //cout<<"happen t= "<<*t<<endl;
                /* code */
                if (*t>=left&&*t<=right)
                {
                    res++;
                    /* code */
                }
                
            }
            cout<<res<<endl;

        }
        
        
        /* code */
    }
    


}