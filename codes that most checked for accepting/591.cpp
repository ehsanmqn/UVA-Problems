#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	int n,sum,num,move,cnt=1,stack[1000];
	
	for(cin>>n;n!=0;cin>>n,cnt++)
	{
		sum=0;
		move=0;
		for(int i=0;i<n;i++)	
		{
			cin>>stack[i];
			sum+=stack[i];
		}
		num=sum/n;
		for(int i=0;i<n;i++)
			if(stack[i]>num)
				move+=stack[i]-num;
		cout<<"Set #"<<cnt<<endl;
		cout<<"The minimum number of moves is "<<move<<"."<<endl;

	}
	return 0;
}