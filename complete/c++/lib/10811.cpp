#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	int N, M;
	int i,j;
	cin >> N >> M;
	int* array = new int[2*N];
	for(int a=0;a<N;a++)
	{
		array[a]=a+1;
	}
	for(int b=0;b<M;b++)
	{
		cin>>i>>j;
		for(int c=0;c<N;c++)
		{
			if(c>=i-1 && c<j) array[N+c] = array[j+i-2-c];
			else array[N+c] = array[c];	
		}
		for(int c=0;c<N;c++)
		{
			array[c] = array[N+c];	
		}
		// for(int d=0;d<N;d++)
		// {
		// 	cout<<array[d];
		// 	if(d<N-1) cout<<" ";
		// }	
		// cout<<endl;
	}
	for(int d=0;d<N;d++)
	{
		cout<<array[d];
		if(d<N-1) cout<<" ";
	}	
}