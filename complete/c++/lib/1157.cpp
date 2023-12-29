#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;

class Abc
{
public:
	int index;
	int number;
	Abc(int index, int number)
	{
		this->index = index;
		this->number = number;
	}
	bool operator>(const Abc &abc)const 
	{
		return this->number > abc.number;
	}
};

bool compareAbc(const Abc& lhs, const Abc& rhs) {
    return lhs > rhs;
}

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