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
	    bitset<8>ob(n);
	    for(int i=0;i<4;i++)
	    {
	        bool d=ob[i];
	        ob[i]=ob[i+4];
	        ob[i+4]=d;
	    }
	    cout<<ob.to_ulong()<<endl;
	}
	return 0;
}
