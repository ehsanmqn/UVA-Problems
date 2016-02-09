#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	char str[10000],ch;
	int cnt=0;

	while(cin>>str)
	{
		if(str[0]!='.' && str[0]!='!')
			cnt++;
		cin.get(ch);
		if(ch=='\n')
		{
			cout<<cnt<<endl;
			cnt=0;
		}
	}
	return 0;
}