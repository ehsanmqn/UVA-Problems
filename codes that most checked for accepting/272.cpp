#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>;

using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	char str[10000];
	int cnt=0;
	while(cin.getline(str,1000))
	{
		for(int i=0;str[i];i++)
		{
			if(str[i]=='"')
			{
				if(cnt%2)	
				{
					cout<<"``";
					cnt++;
				}
				else
				{
					cout<<"''";
					cnt++;
				}
			}
			else
				cout<<str[i];
		}
		cout<<endl;
	}
	return 0;
}