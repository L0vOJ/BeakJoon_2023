#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;
int main(int argc, char **argv)
{
	int row;
	int col;
	cin >> row >> col;

	int** arr[2];

	arr[0] = new int*[row];
	arr[1] = new int*[row];
	for(int i = 0; i < row; i++)
	{
	    arr[0][i] = new int[col];
	    arr[1][i] = new int[col];
	}
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<row;b++)
		{
			for(int c=0;c<col;c++)
			{
				cin>>arr[a][b][c];
			}
		}
	}
	for(int b=0;b<row;b++)
	{
		for(int c=0;c<col;c++)
		{
			cout<<arr[0][b][c]+arr[1][b][c]<<" ";
		}
		cout<<endl;
	}	
}