#include<iostream>
#include<cmath>
#include<stdio.h>
#include<iomanip>
#include<ctime>
using namespace std;
void stnum()
{
	freopen("a.out","w",stdout);
	register long long int i;
	double mod,sq,gol;
	for(i=8;i<65918162;i++)
	{
		mod=(i*(i+1))/2;
		sq=sqrt(mod);
		gol=sq - floor(sq);
		if(gol==0)
		{
			printf("%10.0f%10d\n",sq,i);
		}
	}	
}
int main()
{
	freopen("a.out","w",stdout);
	int t=time(0);
	stnum();
	cout<<"\ntime: "<<time(0)-t;
	return 0;
}