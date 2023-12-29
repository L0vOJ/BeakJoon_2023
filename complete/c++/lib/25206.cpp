#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;
int main(int argc, char **argv)
{
	string dict[10] = {"F","@","D0","D+","C0","C+","B0","B+","A0","A+"};
	string buffer,grade;
	double num,sum=0.0,output=0.0;
	for(int a=0;a<20;a++)
	{
		cin>>buffer>>num>>grade;
		for(double b=0;b<10;b++)
		{
			if(dict[(int)b]==grade)
			{
				sum+=num;
				output+=num*(b/2);
			}
		}
	}
	cout<<output/sum;
}//응용