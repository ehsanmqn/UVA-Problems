#include<iostream>
#include<stdio.h>
using namespace std;

int* value_corr(int n)
{
	int *value;
	value=new int[100];
	for(int i=0;i<n;i++)
		value[i]=n-i-1;
	return value;
}

int find(int *a,int n,int num)
{
	for(int i=0;i<n;i++)
		if(num==a[i]) return i;
}

int size(int *a)
{
	int i;
	for(i=0;a[i]>-1;i++);
	return i;
}

void initialize(int *a,int *b)
{
	for(int i=0;a[i]>-1;i++)
		b[i]=a[i];
}

int main()
{
	freopen("a.in","r",stdin);

	int n,*value,count,index1,index2;
	int pattern[100],help[100],max[100],arr[100];

	cin>>n;
	for(int cnt=0;cnt<n;cnt++)	
		cin>>pattern[cnt];
	value=value_corr(n);

	while(cin>>arr[0])
	{
		for(int i=1;i<n;i++)	
			cin>>arr[i];

		for(int i=0;i<n;i++)
		{
			count=0;
			help[count++]=arr[i];
			for(int j=i+1;j<n;j++)
			{
				index1=find(pattern,n,arr[j]);
				index2=find(pattern,n,help[count-1]);
				if(value[index1]<value[index2])
				{
					help[count++]=arr[j];
				}
				else 
				{
					int index=find(pattern,n,help[count-2]);
					if(value[index]>value[index1])
						help[(--count)++]=arr[j];
				}
			}
			if(size(help)>size(max))
				initialize(help,max);
		}
		cout<<size(max)<<endl;
	}


	return 0;
}