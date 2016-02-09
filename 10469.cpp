#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	int n,A,B;

	while(cin>>A>>B)
		cout<<(A^B)<<endl;
	return 0;
}