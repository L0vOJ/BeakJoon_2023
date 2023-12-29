#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <array>
using namespace std;

int main(int argc, char **argv)
{
	array<bool, 26> ab_array;
	string input;
	int output=0;
	bool result;
	int num;
	int current_char;
	cin>>num;
	for(int a=0;a<num;a++)
	{
		ab_array.fill(false);
		result = true;
		cin>>input;
		for(int i=0;i<input.size();i++)
		{	
			if(!i) //i == 0 처음 
			{
				current_char = (int)input.at(i)%32-1; //현재 변경 
				ab_array[(int)input.at(i)%32-1] = true; //알파벳 인덱스 엑세스
			}
			else //i 1이상 -- 비교 실행 
			{
				if(current_char != (int)input.at(i)%32-1) //다르면 
				{
					if(ab_array[(int)input.at(i)%32-1]) //기존에 이미 있었으면 
					{
						result = false;		
					}
					else //새로운 거라면 
					{
						current_char = (int)input.at(i)%32-1; //현재 변경 
						ab_array[(int)input.at(i)%32-1] = true; //알파벳 인덱스 엑세스
					}
				}
			}
		}
		if(result)
		{
			output++;
		}
	}
	cout<<output<<endl;
}