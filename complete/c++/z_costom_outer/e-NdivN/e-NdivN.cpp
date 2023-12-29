#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;
int main(int argc, char **argv)
{
	// int input;
	// int output;
	//cout<<M_E; //자연상수 e 
	//only puls ver.
	// double min = 1;
	// for(double i=0;i<1000;i++)
	// {
	// 	for(double j=0;j<i;j++)
	// 	{
	// 		if(M_E-i/j>0 && min>(M_E-i/j))
	// 		{
	// 			min = M_E-i/j;
	// 			cout<<i<<" "<<j<<" left: "<<min<<endl;
	// 		}
	// 	}
	// }
	//abs ver.
	double min = 1;
	for(double i=0;i<1000;i++)
	{
		for(double j=0;j<i;j++)
		{
			if(min>abs(M_E-i/j))
			{
				min = abs(M_E-i/j);
				cout<<i<<" "<<j<<" left: "<<M_E-i/j<<endl;
			}
		}
	}

}