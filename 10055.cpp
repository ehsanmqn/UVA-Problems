#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	unsigned long long int num1,num2,abstruct;
	
	while(cin>>num1>>num2)
	{
		if(num1<num2)
			swap(num1,num2);
		printf("%d\n",num1-num2);
	}
	return 0;
}