#include<iostream>

using namespace std;

int main()
{
	freopen("a.in","r",stdin);
	freopen("bb.out","w",stdout);

	int memo = 0, n;
	unsigned long long int cat[1000];

	cat[0] = 1;
	while(cin>>n)
	{
		if(n > memo)
		{
			for(int cnt=memo+1 ; cnt<=n ; cnt++)
				cat[cnt] = (2*cnt)*(2*cnt-1)*cat[cnt-1] / (cnt*(cnt+1));
			memo = n;
			cout<<cat[n]<<endl;
		}
		else
			cout<<cat[n]<<endl;
	}

	return 0;
}