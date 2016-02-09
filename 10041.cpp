#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int findmin(int *arr,int n)
{
	int min=0;
	for(int i=1;i<n;i++)
		if(arr[i]<arr[min])
			min=i;
	return min;
}
int main()
{
	freopen("a.in","r",stdin);
	int n,sum,cnt=0,relnum,i,
		relst[1000],dis[1000];

	for(cin>>n;cnt<n;cnt++)
	{
		cin>>relnum;
		for(int i=0;i<relnum;i++)
			cin>>relst[i];

		for(int i=0;i<relnum;i++)
		{
			dis[i]=0;
			for(int j=0;j<relnum;j++)
				dis[i]+=abs(relst[i]-relst[j]);
		}
		cout<<dis[findmin(dis,relnum)]<<endl;
	}
	return 0;
}