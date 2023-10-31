#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	int input;
	cin>>input;
	int i=1;
	bool ud=false;
	while(i)
	{	
		for(int a=i;a<input;a++)
		{
			cout<<" ";
		}
		for(int b=0;b<(2*i-1);b++)
		{
			cout<<"*";
		}
		cout<<endl;
		if(i==input) ud=true;
		if(!ud) i++;
		else i--;
	}
}