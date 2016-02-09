#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<map>
using namespace std;
//*****************
struct point
{
	double x,y;
}a;
//*****************
void direction(point &a,int n,string s)
{
	double t=n/sqrt(2.0);
	if(s[0]=='N')
	{
		if(s[1]=='E')
		{
			a.x+=t;
			a.y+=t;
		}
		else if (s[1]=='W')
		{
			a.x-=t;
			a.y+=t;
		}
		else
			a.y+=n;
	}
	else if(s[0]=='S')
	{
		if(s[1]=='E')
		{
			a.x+=t;
			a.y-=t;
		}
		else if (s[1]=='W')
		{
			a.x-=t;
			a.y-=t;
		}
		else
			a.y-=n;
	}
	else if(s[0]=='W')
		a.x-=n;
	else if(s[0]=='E')
		a.x+=n;
}
//*****************
int main()
{
	freopen("a.in","r",stdin);
	string str;
	char dir[2];
	int cnt=0;
	getline(cin,str);
	while(str!="END")
	{
		int i=0;
		cnt++;
		a.x=0;
		a.y=0;
		while(1)
		{
			int n=0;
			if(str[i]==',')
			{
				i++;
				continue;
			}
			else if(str[i]=='.')
				break;
			dir[1]=' ';
			while(isdigit(str[i]))
				n=(n*10)+str[i++]-'0';
			int k=0;
			while(isalpha(str[i]))
				dir[k++]=str[i++];
			direction(a,n,dir);
		}
		double eps=-1e-9;
		if(a.x<0 && a.x>eps)
			a.x=0;
		if(a.y<0 && a.y>eps)
			a.y=0;
		cout<<"Map #"<<cnt
			<<"\nThe treasure is located at ("<<fixed<<setprecision(3)<<a.x<<","<<a.y<<").\n"
			<<"The distance to the treasure is "<<sqrt(a.x * a.x + a.y * a.y)<<".\n";
		getline(cin,str);
	}
	return 0;
}