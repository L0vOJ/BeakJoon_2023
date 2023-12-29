#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;

bool compare(int lhs, int rhs) {
    return lhs > rhs;
}

int main(int argc, char **argv)
{
	int N, k;
	cin>>N>>k;
	int* arr = new int[N];
	for(int i=0;i<N;i++)
	{	
		cin>>arr[i];
	}
	sort(arr, arr+N,compare);
	cout<<arr[k-1];
}