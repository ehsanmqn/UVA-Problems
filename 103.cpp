#include<iostream>
#include<stdio.h>
#include<list>
#include<algorithm>
using namespace std;

list<int> h;


bool compare(int *a,int *b,int k)
{
	bool flag=true;

	for(int i=0,iterator=0;i<k;)
		if(a[i]>b[iterator])
		{
			i=(i+1)%k;
			iterator=(iterator+1)%k;
		}
		else if(i==0)	
			iterator=(iterator+1)%k;
		else
			flag=false;
	if(flag)	return true;
	return false;
}

char sumation(int *a,int *b,int k)
{
	int sum1=0,sum2=0;
	for(int cnt=0;cnt<k;sum1+=a[cnt],sum2+=b[cnt++]);
	if(sum1>sum2)	return '>';
	else if(sum1<sum2)	return '<';
	else	return '=';
}

void add(int *iterator,int *pointer,int cnt,int k)
{
	if(!*iterator){	return;}
	if(sumation(pointer[*iterator],pointer[cnt])=='>')
	{
		if(compare(pointer[*(iterator+1)],pointer[cnt]))
			add(iterator+1,pointer,cnt);
		else
			h.insert(iterator+1,cnt);
	}
	else if(sumation(pointer[*iterator],pointer[cnt],k)=='<')
	{
		if(compare(pointer[cnt],pointer[*iterator],k))
			h.push_front(cnt);
	}

}
int main()
{
	int *pointer[1000],*arr;
	int n,k;
	
	freopen("a.in","r",stdin);

	cin>>n>>k;
	for(int cnt=0;cnt<n;cnt++)
	{
		arr=new int[k];
		for(int i=0;i<k;i++)
			cin>>arr[i];
		pointer[cnt]=arr;
	}

	list<int>::iterator coll;
	list<int> nest;

	for(int cnt=0;cnt<n;cnt++)
	{
		h.push_back(cnt);
		coll=h.begin();
		for(int i=0;i<n;i++)
			if(i!=cnt)
				add(coll,pointer,i,k);
		if(h.size()>nest.size())
			for(coll=h.begin();coll!=h.end();coll++)
				nest=h;
	}
	
	cout<<nest.size()<<endl;
	nest.reverse();
	for(coll=nest.begin();coll!=nest.end();coll++)
		cout<<*coll;
		
	return 0;
}