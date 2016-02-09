#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	int n,k,sum;

	while(cin>>n>>k)
	{
		sum=n;
		while(n>=k)
			sum+=(n/=k);
		cout<<sum<<endl;
	}
	return 0;
}