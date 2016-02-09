#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

void initial(int *arr,int n)
{
	for(int i=0;i<n;arr[i]=i+1,i++);
}
int main()
{
	freopen("a.in","r",stdin);
	int n,m,k,counter,*arr;
	
	for(cin>>n>>k>>m;n!=0;cin>>n>>k>>m)
	{
		arr=new int[n];
		counter=1;
		initial(arr,n);
		arr[m]=-1;
		int cnt=1;
		int i=m+1;
		bool flag=1;
		while(counter<n-1)
		{
			if(arr[i]!=-1)	cnt++;
			if(!(cnt%k)){arr[i]=-1;	counter++;}
			i=(i+1)%n;
		}
		for(int i=0;i<n;i++)
			if(arr[i]!=-1)
			{
				cout<<arr[i]<<endl;
				break;
			}

	}
	return 0;
}