#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;
int main(int argc, char **argv)
{
	array<int, 4> coin = {25,10,5,1};
	array<int, 4> output;
	int T;
	int C;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		output.fill(0);
		cin >> C;
		for(int j=0;j<4;j++)
		{
			output[j] = C/coin[j];
			C -= output[j] * coin[j];
		}
		for(int j=0;j<4;j++)
		{
			cout<<output[j]<<" ";
		}
		cout<<endl;
	}
}