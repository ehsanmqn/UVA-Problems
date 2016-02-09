#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	int c,n,arr[10000],sum,count;
	double ave,perc;

	cin>>c;
	for(int cnt=0;cnt<c;cnt++)
	{
		count=0;
		sum=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		ave=sum/n;
		for(int i=0;i<n;i++)
			if(arr[i]>ave)
				count++;
		perc=count*100.0/n;
		printf("%0.3f%%\n",perc);

	}
	return 0;
}