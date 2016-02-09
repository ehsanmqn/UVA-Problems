#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	double num;
	int n,sol;

	cin>>n;
	for(int cnt=0;cnt<n;cnt++)
	{
		cin>>num;
		sol=pow(num,0.5);
		printf("%d\n\n",sol);
	}
	return 0;
}