#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

bool prime[1000100];

void isprime()
{
	int i,j;
	prime[1]=false;
	int m=(int)sqrt(1000000.0);
	for(i=2;i<=m;i++)
		if(prime[i])
			for(j=i*i;i<=1000000;j+=i)
				prime[j]=false;
}
int sumdigit(int a)
{
	int sum=0;
	while(a>0)
	{
		a/=10;
		sum++;
	}
	return sum;
}
int main()
{
	memset(prime,1,sizeof prime);
	isprime();
	int n,i,j,a,b;
	scanf("%d",&n);
	cout<<sumdigit(n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		int count=0;
		for(j=a;j<=b;j++)
			if(prime[j])
				if(prime[sumdigit(j)])
					count++;
		printf("%d\n",count);
	}
}