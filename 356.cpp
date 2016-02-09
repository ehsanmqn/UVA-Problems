#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	int n,contain,ncontain;

	while(cin>>n)
	{
		contain=(n-1)*8+4;
		if(n%2)
			ncontain=4*n*n-contain-4;
		else
			ncontain=4*n*n-contain-12;
		printf("In the case n = %d, %d cells contain segments of the circle.\n",n,contain);
		printf("There are %d cells completely contained in the circle.\n\n",ncontain);
	}
	return 0;
}