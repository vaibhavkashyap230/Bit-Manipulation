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
	    int n,d;
	    cin>>n>>d;
	    bitset<16>bt(n);
	    bitset<16>c=bt;
	    for(int i=0;i<d;i++)
	    {
	        //rotate left
	        bool d=c[0];
	        for(int j=0;j<11;j++)
	        {
	            c[j]=c[j+1];
	        }
	        c[11]=d;
	    }
	    cout<<c.to_ullong()<<endl;
	}
	return 0;
}
