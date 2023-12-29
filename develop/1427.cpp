#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>		//진행중 정렬쪽임
using namespace std;

class Abc
{
public:
	int x;
	int y;
	Abc(int index, int number)
	{
		this->x = x;
		this->y = y;
	}
};

int main(int argc, char **argv)
{
	std::vector<Abc> abc;
	array<int, 26> ab_array;
	ab_array.fill(0);
	string input;
	cin>>input;
	for(int i=0;i<input.size();i++)
	{	
		ab_array[(int)input.at(i)%32-1]++;
	}
	for(int i=0;i<26;i++)
	{	
		abc.push_back(Abc(i,ab_array[i]));
	}
	sort(abc.data(), abc.data() + abc.size(),compareAbc);
	if(abc.at(0).number==abc.at(1).number)
	{
		cout<<"?"<<endl;
	}
	else cout<<(char)(abc.at(0).index+65)<<endl;
}