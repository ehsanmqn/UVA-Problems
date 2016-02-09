#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	string str;
	while(cin>>str)
	{
		for(int cnt=0;str[cnt];cnt++)
			str[cnt]-=7;
		cout<<str<<endl;
	}
	return 0;
}