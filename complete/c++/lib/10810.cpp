#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	int N, M;
	int i,j,k;
	cin >> N >> M;
	int* array = new int[N];
	for(int b=0;b<M;b++)
	{
		cin>>i>>j>>k;
		for(int c=i-1;c<j;c++)
		{
			array[c] = k;
		}
	}
	for(int d=0;d<N;d++)
	{
		cout<<array[d];
		if(d<N-1) cout<<" ";
	}	
}