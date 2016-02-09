#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;


int memo[10000];

void precal()
{
	for(int cnt=0;cnt<10000;memo[cnt]=cnt*cnt,cnt++);
}

void findtime(int time,int &x,int &y)
{
	int index;
	bool flag=true;
	x=y=1;
	for(int i=1;i<10000 && flag;i++)
		if(time>=memo[i] && time<=memo[i+1])
		{
			flag=false;
			index=i+1;
			if(index%2)
				if(time>memo[i+1]-i)
				{
					x=index;
					for(int num=x*x;num>time;num--,y++);
				}
				else if(time<memo[i+1]-i)
				{
					y=index;
					for(int num=(y-1)*(y-1)+1;num<time;num++,x++);
				}
				else
					x=y=index;
			else
				if(time>memo[i+1]-i)
				{
					y=index;
					for(int num=y*y;num<time;num++,x++);
				}
				else if(time<memo[i+1]-i)
				{
					x=index;
					for(int num=(x-1)*(x-1)+1;num>time;num--,y++);
				}
				else
					x=y=index;
		}
}

int main()
{
//	freopen("a.in","r",stdin);
	int time,x,y;
	
	precal();
	for(cin>>time;time;cin>>time)
	{
		findtime(time,x,y);
		cout<<y<<" "<<x<<endl;
	}
	return 0;
}