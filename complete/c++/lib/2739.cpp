#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	int input;
	cin>>input;
	for(int a=1;a<10;a++)
	{
		cout<<input<<" * "<<a<<" = "<<input*a<<endl;
	}
	return 0;
}