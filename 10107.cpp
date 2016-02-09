#include<iostream>
//#include<cstdio>
//#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	long long int input[10000];
	int cnt,index;

	for(cnt=0;cin>>input[cnt];cnt++);
	for(int i=0;i<cnt;i++)
	{
		index=(i+1)/2;
		if((i+1)%2)
			if(input[i]>input[i-1])	cout<<input[index]<<endl;
			else	
			{
				sort(input,input+i+1);
				cout<<input[index]<<endl;
			}
		else
			if(input[i]>input[i-1])	cout<<(input[index]+input[index-1])/2<<endl;
			else
			{
				sort(input,input+i+1);
				cout<<(input[index]+input[index-1])/2<<endl;
			}
	}
	return 0;
}