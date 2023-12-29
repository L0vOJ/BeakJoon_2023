#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;
int main(int argc, char **argv)
{
	string N;
	int B;
	cin >> N >> B;
	int power=0;
	int output=0;
	for(int i=N.size()-1;i>=0;i--)
	{
		output += ((int)N.at(i)-((int)N.at(i)>64 ? 55 : 48))*pow(B,power);
		power++;
	}
	cout<<output;
}