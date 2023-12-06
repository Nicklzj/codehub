#include<iostream>
using namespace  std;
int main()
{
    int N;
    cin>> N;
    for (size_t i = 0; i < N; i++)
    {
        int count;
        cin>>count;
        int a[11111];
        for (size_t k = 0; k < count; k++)
        {
            cin>>a[k];
            /* code */
        }
        int res=0;
        for (size_t j = 0; j < count; j++)
        {
            for (size_t z = j; z < count; z++)
            {
                for (size_t x = z; x < count; x++)
                {
                    if (a[j]+a[z]==a[x])
                    {
                        res++;
                        break;;
                    }
                    
                    /* code */
                }
                
                
                /* code */
            }
            
            /* code */
        }
        cout<<res<<endl;

        /* code */
    }
    


    return 0;

}