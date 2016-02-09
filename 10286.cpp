#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	double a,b,s1,s2,s;
	while(cin>>a)
	{
		s1=sin(108*atan(1.0)*4/180);
		s2=sin(63*atan(1.0)*4/180);
		s=a*s1/s2;
		printf("%0.10f\n",s);
	}
	return 0;
}