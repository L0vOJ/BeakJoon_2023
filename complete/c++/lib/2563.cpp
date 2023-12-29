#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;
int main(int argc, char **argv)
{
	bool** arr = new bool*[100];
	for(int i = 0; i < 100; i++)
	{
	    arr[i] = new bool[100];
	}
	int num,x,y,output=0;
	cin >> num;
	for(int i=0;i<num;i++)
	{
		cin>>x>>y;
		for(int a=x;a<(x<90?x+10:100);a++)
		{
			for(int b=y;b<(y<90?y+10:100);b++)
			{	
				arr[a][b] = true;	
			}
		}
	}
	for(int a=0;a<100;a++)
	{
		for(int b=0;b<100;b++)
		{
			if(arr[a][b])
			{
				output++;
			}
		}
	}
	cout<<output;
}