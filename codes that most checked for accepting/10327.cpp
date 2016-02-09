#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	int n,arr[10000];
	while(cin>>n)
	{
		int cnt=0;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
		{
			int j=i;
			for(int k=i+1;k<n;k++)
				if(arr[k]<arr[j])	j=k;
			if(j!=i)
			{
				swap(arr[j],arr[i]);
				cnt++;
			}
		}
		cout<<"Minimum exchange operations : "<<cnt<<endl;
	}
	return 0;
}