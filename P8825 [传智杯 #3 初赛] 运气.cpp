#include<iostream>
using namespace std;
typedef long long ll;
ll res;
int main()
{
    ll n,k;
    cin>>n>>k;
    string maxValue(n,'6');
    string minValue(n,'1');
    ll mmin=atoi(minValue.c_str());
    ll mmax=atoi(maxValue.c_str());
    cout<<mmin<<"  "<<mmax<<endl;

    ll i;
    for ( i = mmin; i <= mmax; i++)
    {
        /* code */
        if (i%k==0)
        {
            
            for (; i <= mmax; i+=k)
            {
                res+=1;
            }
            break;
        }
        
    }
    ll r=pow(10,9)+7;
    //res+=((mmax-i)/k)%(r);
    cout<<res%r<<endl;
    //cout<<mmax<<endl;
    // for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    





    return 0;
}