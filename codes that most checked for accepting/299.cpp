#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	int n,k,cnt,index,swp,arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		swp=0;
		cin>>k;
		for(int j=1;j<k+1;cin>>arr[j++]);
		int num=k;
		while(num)
		{
			for(index=1;index<k+1;index++)
				if(arr[index]==num)	break;
			if(num!=index)
				for(int cnt=index+1;cnt<num+1;cnt++)
				{
					swp++;
					swap(arr[cnt],arr[index++]);
				}
			num--;
		}
		cout<<"Optimal train swapping takes "<<swp<<" swaps."<<endl;
	}
	return 0;
}