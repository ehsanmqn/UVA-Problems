#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()

{
	//freopen("a.in","r",stdin);
	int n,xline[20],count,xnum,max=-1,bnum,sum=0,index;
	char string[30];
	for(cin>>n;n!=0;cin>>n)
	{
		gets(string);
		max=-1;
		for(int cnt=0;cnt<n;cnt++)
		{
			gets(string);
			xnum=0;
			sum=0;
			for(int i=0;string[i];i++)
				if(string[i]=='X')	xnum++;
			xline[cnt]=xnum;
			if(xnum>max)
				max=xnum;
		}
		for(int i=0;i<n;i++)
			sum+=xline[i];
		bnum=n*max-sum;
		cout<<bnum<<endl;
	}
	return 0;
}