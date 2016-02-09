#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	int V,D;
	double d,p,div;

	cin>>D>>V;
	while(D!=0 && V!=0)
	{
		p=((atan(1.0)*4*D*D*D-6*V)/(atan(1.0)*4));
		d=pow(p,1.0/3);
		printf("%0.3f\n",d);
		cin>>D>>V;
	}
	return 0;
}