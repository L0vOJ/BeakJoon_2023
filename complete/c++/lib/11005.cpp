#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;
int main(int argc, char **argv)
{
	int N;
	int B;
	cin >> N >> B;
	string output;
	while(N)
	{
		output.push_back((char)(N%B + (N%B>9?55:48)));
		N/=B;
	}
	reverse(output.begin(),output.end());
	cout<<output;
}