#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	freopen("a.out","w",stdout);
	long long int i,j,sum1=0,sum2=0;
	int c;
	for(i=1,c=0;c<8;i++)
	{
		sum1+=i;
		sum2=0;
		j=i+2;
		while(sum2<sum1)
		{
			sum2+=j;
			j++;
		}
		if(sum1==sum2)
		{
			cout<<setw(10)<<i+1<<setw(10)<<j-1<<endl;
			c++;
		}
	}
	return 0;
}