#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	int n,freq,amp;

	cin>>n;

for(int i=0;i<n;i++)
	{
		cin>>amp>>freq;
		for(int cnt=0;cnt<freq;cnt++)
		{
			for(int i=1,sign=1;i<(2*amp-1)+1 && i>0;sign++,(sign<amp+1) ? i++ : i--)
			{
				for(int j=0;j<i;j++)
					if(i%amp)
						cout<<i;
					else
						cout<<amp;
				cout<<endl;
			}
			cout<<endl;
		}
	}
	return 0;
}