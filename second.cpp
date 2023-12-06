#include<iostream>
#include<algorithm>
using namespace std;
int N;
float a[11111];
int b[11111];
float c[11111];
int main(){
    cin>>N;
    for (size_t i = 0; i < N; i++)
    {
        /* code */
        cin>>a[i];
        c[i]=a[i];

    }
    for (size_t i = 0; i < N; i++)
    {
        /* code */
        sort(a,a+N);

    }
    cout<<a[N-1]<<endl;
    for (size_t i = 0; i < N; i++)
    {
        b[i]=100*(c[i]-a[0])/(a[N-1]-a[0]);
        printf("%d ",b[i]);
        /* code */
    }
    

    return 0;
}