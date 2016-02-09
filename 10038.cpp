#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	int *p1,*p2,n,
		cnt,dif,t1,t2;
	bool flag;
	while(cin>>n)
	{
		t1=0;
		t2=0;
		flag=true;
		p1=(int*) malloc((n-2)*sizeof(int));
		p2=(int*) malloc(n*sizeof(int));
		for(int i=1;i<n;i++)
			p1[i]=1;
		for(int i=0;i<n;i++)
			cin>>p2[i];
		for(cnt=0;cnt<n-1;cnt++)
		{
			dif=abs(p2[cnt]-p2[cnt+1]);
			if(dif==0)
				t1++;
			if(p1[dif]==1)
				p1[dif]=2;
		}
		for(int i=1;i<n;i++)
			if(p1[i]!=2)
				flag=false;
		if(t1==n-1 || flag)
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;
	}
	return 0;
}