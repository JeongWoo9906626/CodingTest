#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<int> Alphabet;
	Alphabet.resize('z' - 'a' + 1);
	for (int i = 0; i < 'z' - 'a' + 1; ++i)
	{
		Alphabet[i] = 0;
	}

	std::string S;
	std::cin >> S;
	for (const char& Split : S)
	{
		++Alphabet[Split - 'a'];
	}

	for (const int Count : Alphabet)
	{
		std::cout << Count << " ";
	}

	return 0;
}