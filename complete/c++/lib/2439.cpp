#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	int input;
	cin>>input;
	for(int i=1;i<=input;i++)
	{
		for(int j=input-1;j>=0;j--)
		{
			if(j>=i) cout<<" ";
			else cout<<"*";
		}
		cout<<endl;
	}
}