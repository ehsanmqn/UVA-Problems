#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int memo[100];
int f91(int n)
{
	if(n<=100)	return 91;
	else	return n-10;
}
int main()
{
	//freopen("a.in","r",stdin);
	int n,sol;
	cin>>n;
	while(n!=0)
	{
		sol=f91(n);
		printf("f91(%d) = %d\n",n,sol);
		scanf("%d",&n);
	}
	return 0;
}