#include<stdio.h>
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

int counter(int min,int max)
{
	int cycle,cmax=0,c;
	if(min>max)
		swap(min,max);
	for(int num=min;num<=max;num++)
	{
		if(memo[num])
			cycle=memo[num];
		else
			cycle=cycle_length(num);
		if(cycle>cmax)
			cmax=cycle;
	}
	return cmax;
}

int main()
{
	int first,last;

	//freopen("a.in","r",stdin);
	memo[1]=1;
	while(cin>>first>>last)
		printf("%d %d %d\n",first,last,counter(first,last));
	
	return 0;
}
