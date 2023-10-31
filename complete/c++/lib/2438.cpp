#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	int input;
	cin>>input;
	for(int i=0;i<input;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}