#include<cstdio>
#include<iostream>
using namespace std;

const int maximum=1000000;
int memo[maximum];

unsigned short int cycle_length(unsigned int cycle)
{
	if(cycle<maximum)
	{
		if(memo[cycle]) return memo[cycle];	
		if(cycle%2) return memo[cycle]=1+cycle_length(3*cycle+1);
		return memo[cycle]=1+cycle_length(cycle/2);
	}
	else
		if(cycle%2) return 1+cycle_length(3*cycle+1);
		return 1+cycle_length(cycle/2);
}

int counter(int min,int max,int &cnum)
{
	int cycle,cmax=0;
	for(int num=min;num<=max;num++)
	{
		if(memo[num])
			cycle=memo[num];
		else
			cycle=cycle_length(num);
		if(cycle>cmax)
		{
			cmax=cycle;
			cnum=num;
		}
	}
	return cmax;
}

int main()
{
	int first,last,cnt,num=0;

	//freopen("a.in","r",stdin);
	memo[1]=1;
	cin>>first>>last;
	while(last && first)
	{
		if(first>last)	swap(first,last);
		cnt=counter(first,last,num);
		printf("Between %d and %d, %d generates the longest sequence of  %d values. \n",first,last,num,cnt-1);
		cin>>first>>last;
	}
	
	return 0;
}
