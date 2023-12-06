#include<iostream>
using namespace std;
int N=0;
int main()
{
    cin>>N;
    for (size_t i = 0; i < N; i++)
    {
        /* code */
        int a,b;
        cin>>a>>b;
        if(b>20){
            a=a-(b-20);
        }
        else if (b<16)
        {
            a-=10;
            /* code */
        }
        cout<<a<<endl;

    }
    


    return 0;
}