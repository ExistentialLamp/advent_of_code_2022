/**
* Existential Lamp
* 12/01/2022
* Advent of Code 2022
* takes a list of ints, and finds the largest sequence
*/
#include <iostream>
#include <fstream>
#include <vector>

using std::vector;
using std::string;

int main()
{
	std::ifstream calorie_list ("input.txt");
	int input {0};
	
	//Vector storing how many calories each elf has
	vector<int> total_calories;
	int running_count {0};
	while(calorie_list >> input)
	{
		running_count += input;
		if(input == 0)
		{
			total_calories.push_back(running_count);
			running_count = 0;
		}
	}
	
	int highest_count = 0;
	for(int n : total_calories)
	{
		if(n > highest_count)
		{
			highest_count = n;
		}
	}
	cout << highest_count;
	return 0;
}
	