#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;
int main(int argc, char **argv)
{
	int arr[6];
	for(int i=0;i<6;i++)
	{
		cin>>arr[i];
	}
	for(int a=-999;a<1000;a++)
	{
		for(int b=-999;b<1000;b++)
		{	
			if(arr[0]*a+arr[1]*b==arr[2] && arr[3]*a+arr[4]*b==arr[5])
			{
				cout<<a<<" "<<b;
				return 0;
			}
		}	
	}
}