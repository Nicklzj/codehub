#include <iostream>
#include <cstdio>
#include <ctime>
#include <cmath>
#define inf 20000005
using namespace std;
int n;
bool a[inf + 1];
long num[inf + 1] = {1, 1}, prime[inf + 1] = {0}, number = 0;

void putongshaifa()
{
    clock_t begin, end;
    begin = clock();
    for (int i = 0; i <= n; ++i)
        a[i] = true;
    a[1] = false;
    for (int i = 2; i < sqrt(n); ++i)
        if (a[i])
            for (int j = 2; j <= n / i; ++j)
                a[i * j] = false;
    end = clock();
    /*for(int i=2,t=0;i<=n;++i)
      if(a[i])
      {
        cout<<i<<" ";
        ++t;
        if(t%10==0) cout<<endl;
      }
    cout<<endl;*/
    printf("普通筛法-Time used:%d ms\n", end - begin);
    return;
}

void kuaisushaifa()
{
    clock_t begin, end;
    begin = clock();
    for (int i = 2; i <= n; ++i)
    {
        if (!num[i])
            prime[number++] = i;
        for (int j = 0; j < number && i * prime[j] <= n; j++)
        {
            num[i * prime[j]] = 1;
            if (!(i % prime[j]))
                break;
        }
    }
    end = clock();
    /*for(int i=0;i<number;i++)
    {
        if(i%10==0) printf("\n");
        printf("%3d",prime[i]);
    }  */
    printf("快速筛法-Time used:%d ms\n", end - begin);
    return;
}

int main()
{
    // freopen("prime.txt","w",stdout);
    scanf("%d", &n);
    int _test = 10;
    while (_test--)
    {
        putongshaifa();
        kuaisushaifa();
        cout << endl;
    }
    return 0;
}