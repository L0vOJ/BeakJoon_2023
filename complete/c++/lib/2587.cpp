#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;

int main(int argc, char **argv)
{
	double sum = 0.0;
	array<int, 5> ab_array;
	for(int i=0;i<5;i++)
	{	
		cin>>ab_array[i];	
		sum+=ab_array[i];
	}
	sort(ab_array.data(), ab_array.data() + 5);
	cout<<sum/5<<endl<<ab_array[2];
}