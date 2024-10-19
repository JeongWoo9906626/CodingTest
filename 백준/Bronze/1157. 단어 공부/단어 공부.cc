#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
char solution(std::string Words)
{
	char Result;
	std::vector<int> AlphabetCount;
	AlphabetCount.resize('Z' - 'A' + 1, 0);
	for (char Alphabet : Words)
	{
		Alphabet = std::toupper(Alphabet);
		++AlphabetCount[Alphabet - 'A'];
	}

	std::vector<int>::iterator it = std::max_element(AlphabetCount.begin(), AlphabetCount.end());
	int Max = *it;
	int MaxCount = std::count(AlphabetCount.begin(), AlphabetCount.end(), Max);
	if (MaxCount > 1)
	{
		Result = '?';
	}
	else
	{
		int Index = std::distance(AlphabetCount.begin(), it);
		Result = 'A' + Index;
	}
	return Result;
}


int main() 
{
	std::string Inputs;
	std::cin >> Inputs;
	std::cout << solution(Inputs) << std::endl;
	return 0;
}