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
	    int a,b;
	    cin>>a>>b;
	    int c=0;
	    bitset<10>ba(a);
	    bitset<10>bb(b);
	    for(int i=0;i<10;i++)
	    {
	        if(ba[i]!=bb[i])
	        c+=1;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
