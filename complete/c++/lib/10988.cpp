#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	string input;
	cin>>input;
	bool state=true;
	for(int i=0;i<input.size()/2;i++)
	{	
		if(input.at(i)!=input.at(input.size()-1-i))
		{
			state=false;
			break;
		}
	}
	cout<<state;
}