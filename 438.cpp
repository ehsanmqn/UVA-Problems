#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	double x,x1,x2,x3,y,y1,y2,y3,r,p,a1,b1,a2,b2,m1,m2;
	bool f1,f2;

	while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
	{
		f1=true;
		f2=true;
		a1=(x1+x2)/2;
		b1=(y1+y2)/2;
		a2=(x2+x3)/2;
		b2=(y2+y3)/2;

		if(y1!=y2)
			m1=-1*(x1-x2)/(y1-y2);
		else if(y1==y2)
		{
			x=a1;
			f1=false;
		}

		if(y2!=y3)
			m2=-1*(x2-x3)/(y2-y3);
		else if(y2==y3)
		{
			x=a2;
			f2=false;
		}
		if(f1 && f2)
		{
			x=(m2*a2-m1*a1+b1-b2)/(m2-m1);
			y=m1*(x-a1)+b1;
		}
		if(!f1)
			y=m2*(x-a2)+b2;
		if(!f2)
			y=m1*(x-a1)+b1;

		r=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
		p=2*atan(1.0)*4*r;
		printf("%0.2f\n",p);
	}
	return 0;
}