#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>

using namespace std;

int base_finder(char *str,int cnt,int base)
{
	if(cnt==(strlen(str)-1))
		return str[cnt]-48;
	int r=base_finder(str,cnt+1,base);
	return (r+(str[cnt]-48)*pow(1.0*base,1.0*(strlen(str)-cnt-1)));
}

bool is_equal(char *A,char *B,int &b1,int &b2)
{
	for(int i=2;i<=36;i++)
		for(int j=2;j<=36;j++)
		{
			int h1=base_finder(A,0,i);
			int h2=base_finder(B,0,j);
			if(h1==h2)
			{
				b1=i;
				b2=j;
				return true;
			}
		}
	return false;
}
int main()
{
	freopen("a.in","r",stdin);
	int b1,b2;
	char str1[1000],str2[1000];
	
	while(cin>>str1>>str2)
	{
		if(is_equal(str1,str2,b1,b2))
			cout<<str1<<" (base "<<b1<<") = "<<str2<<" (base "<<b2<<")\n";
	}
	return 0;
}