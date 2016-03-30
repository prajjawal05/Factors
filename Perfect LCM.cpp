//didn't wrote this code in yesterday's contest
//but kinda' coool
//Laziness(My main possesion) is my main rival :D
#include<bits/stdc++.h>
using namespace std;
#define maxi 10000001
vector<int> v;
int a[maxi];
seive()
{
	for(int i=2;i*i<maxi;i++)
	{
		if(a[i]==0)
		{
			for(int j=i*i;j<maxi;j+=i)
				a[j]=1;
		}
		v.push_back(i);
	}
}
int lcm(int a,int b)
{
	int m=max(a,b),p=1;
	for(int i=0;v[i]<m;i++)
	{
		int k1=0,k2=0,k;
		while(a%v[i]==0)
		{
			a=a/v[i];
			k1++;
		}
		while(b%v[i]==0)
		{
			b=b/v[i];
			k2++;
		}
		k=max(k1,k2);
		if(k%2!=0)
			k++;
		p*=pow(v[i],k);	
	}
	return p;
}
int main()
{
	seive();
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<lcm(a,b);
	}
	return 0;
}
