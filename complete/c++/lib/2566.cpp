#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;
int main(int argc, char **argv)
{
	int max=0, row=1, col=1;
	int** arr = new int*[9];
	for(int i = 0; i < 9; i++)
	{
	    arr[i] = new int[col];
	}
	for(int a=0;a<9;a++)
	{
		for(int b=0;b<9;b++)
		{
			cin>>arr[a][b];
			if(arr[a][b]>max)
			{
				max = arr[a][b];
				row = a+1;
				col = b+1;
			}
		}
	}
	cout<<max<<endl<<row<<" "<<col;
}