#include<iostream>
#include<cstdio>
#include<cmath>
#include<stack>
#include<algorithm>

using namespace std;

int find_max(int*arr,int n)
{
	int max=-100,index;
	for(int i=0;i<n;i++)
		if(arr[i]>max)	
		{
			max=arr[i];
			index=i;
		}
	return index;
}

int main()
{
	//freopen("a.in","r",stdin);
	int n,cnt,seq[10000],arr[10000];

	cin>>n;
	while(n!=0)
	{
		cnt=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]!=0)
				seq[cnt++]=arr[i];
		}
		for(int i=0;i<cnt;i++)
			cout<<seq[i]<<" ";
		cout<<endl;
		cin>>n;
	}
	return 0;
}