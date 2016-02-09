#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	double a1,a2,b1,b2,c1,c2,area1,area2;
	int n;

	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a1>>a2>>b1>>b2>>c1>>c2;
		double c=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
		double b=sqrt((a1-c1)*(a1-c1)+(a2-c2)*(a2-c2));
		double a=sqrt((b1-c1)*(b1-c1)+(b2-c2)*(b2-c2));
		double x=b*sin(acos((a*a+b*b-c*c)/(2*a*b)));
		int area=(x*a)/14;
		cout<<area<<endl;
	}
	return 0;
}