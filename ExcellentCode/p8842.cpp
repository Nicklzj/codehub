#include <bits/stdc++.h>
using namespace std;

const int N=1e7+10;
int prime[N],sum[N];

int main() {
	int n;
	cin>>n;
	prime[0]=prime[1]=1;
	for(int i=2;i<=N-10;i++)
	{
		if(prime[i]) continue;
		for(int j=2;i*j<=N-10;j++) prime[i*j]=1;
	}
	for(int i=1;i<=N-10;i++) sum[i]=sum[i-1]+(!prime[i]); 
	for(int i=1;i<=n;i++)
	{
		int x,ans=0;
		cin>>x;
		for(int j=0;j<=30;j++)
			if(x&(1<<j)) 
				ans+=sum[(1<<(j+1))-1]-sum[(1<<j)-1];
		cout<<ans<<'\n';
	}
	return 0;
}

