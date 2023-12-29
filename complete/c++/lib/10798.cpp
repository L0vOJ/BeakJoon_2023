#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;
int main(int argc, char **argv)
{
	string* arr = new string[5];
	for(int a=0;a<5;a++)
	{
		cin>>arr[a];
	}
	for(int a=0;a<15;a++)
	{
		for(int b=0;b<5;b++)
		{
			if(arr[b].size()>a)
			{
				cout<<arr[b][a];
			}
		}
	}
}