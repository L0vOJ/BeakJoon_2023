#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	//int input;
	int output;
	int in_sum;
	int N;
	int a,b;
	int check_sum=0;
	cin>>in_sum;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>a>>b;
		check_sum+=a*b;
	}
	if(in_sum==check_sum) cout<<"Yes";	
	else cout<<"No";	
}