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
	string input;
	cin>>input;
	sort(input.begin(),input.end(),compare);
	cout<<input;
}