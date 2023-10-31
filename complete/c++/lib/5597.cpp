#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	int input;
	int* array = new int[30]{false};
	for(int a=0;a<28;a++)
	{
		cin>>input;
		array[input-1] = true;
	}
	for(int b=0;b<30;b++)
	{
		if(!array[b])
			cout<<b+1<<endl;
	}
}