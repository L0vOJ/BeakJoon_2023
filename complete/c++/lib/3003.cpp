#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	int* in_arr = new int[6];
	int* std_arr = new int[6]{1,1,2,2,2,8};
	int* out_arr = new int[6];
	for(int i=0;i<6;i++)
	{
		cin>>in_arr[i];
		out_arr[i] = std_arr[i] - in_arr[i];
	}
	for(int j=0;j<6;j++)
	{
		cout<<out_arr[j];
		if(j<5) cout<<" ";
	}	
}