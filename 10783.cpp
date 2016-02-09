#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	int n,r1,r2,c1,c2,sum;
	
	cin>>n;
	for(int cnt=0;cnt<n;cnt++)
	{
		cin>>r1>>r2;
		c1=(r1+1)/2;
		c2=(r2+1)/2;
		sum=c2*c2-(c1-1)*(c1-1);
		cout<<"Case "<<cnt+1<<": "<<sum<<endl;
	}
	return 0;
}