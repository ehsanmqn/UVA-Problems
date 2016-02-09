#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	int n;
	double r,x,y,alfa,s,st;

	while(cin>>r>>n)
	{
		alfa=360.0/n;
		st=r*r*sin((alfa*atan(1.0)*4/180)/2)*cos((alfa*atan(1.0)*4/180)/2);
		s=n*st;
		printf("%0.3f\n",s);
	}
	return 0;
}