#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	int area,anim,fe,n,sum,num;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		sum=0;
		cin>>num;
		for(int cnt=0;cnt<num;cnt++)
		{
			cin>>area>>anim>>fe;
			sum+=area*fe;
		}
		cout<<sum<<endl;
	}
	return 0;
}