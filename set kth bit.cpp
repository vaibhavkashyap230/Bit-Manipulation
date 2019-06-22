#include<stdio.h>
#include<iostream>
#include<bitset>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int n;
	    cin>>n;
	    bitset<10>bt(n);
	    int k;
	    cin>>k;
	    bt[k]=1;
	    n=bt.to_ulong();
	    cout<<n<<endl;
	}
	return 0;
}
