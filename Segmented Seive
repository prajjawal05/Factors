//very cool stuff
//really liked it
//mixture of normal seive along with some calculations
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void simple(int max)
{
    int a[max+1]={0};
    //memset(a, true, sizeof(a)); 
    for (int i=2; i*i<max; i++)
    {
        if (a[i] == 0)
        {
            for (int j=i*2; j<max; j+=i)
                a[j] = 1;
        }
    }
 	for (int i=2; i<max; i++)
    {
        if (a[i] == 0)
            v.push_back(i);
    }
}
void segmented(int n)
{
    int max = (sqrt(n))+1;
    simple(max); 
	int low  = max;
    int high = 2*max;
 	while (low<n)
    {
        int a[max+1]={0};
        for (int i = 0; i < v.size(); i++)
        {
            int start=floor(low/v[i])*v[i];
            if (start<low)
                start+=v[i];
 			for (int j=start;j<high;j+=v[i])
                a[j-low]=1;
        }
 		for (int i = low; i<high; i++)
            if (a[i-low] == 0)
               v.push_back(i);
 		low+=max;
        high+=max;
        if(high>=n)
			high = n;
    }
}
 
// Driver program to test above function
int main()
{
    int n = 100;
    cout << "Primes smaller than " << n << ":\n";
    segmented(n);
    for(int i=0;i<v.size();i++)
    	printf("%d\n",v[i]);
    return 0;
}
