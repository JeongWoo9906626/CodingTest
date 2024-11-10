#include <iostream>
#include <string>
#include <list>

int main()
{
	std::string Word;
	std::cin >> Word;
	std::list<char> Editor(Word.begin(), Word.end());
	int InputNumber = 0;
	std::cin >> InputNumber;
	auto Cursor = Editor.end();
	for (int i = 0; i < InputNumber; ++i)
	{
		char Order;
		std::cin >> Order;
		switch (Order)
		{
		case 'L':
			if (Cursor != Editor.begin())
			{
				--Cursor;
			}
			break;
		case 'D':
			if (Cursor != Editor.end())
			{
				++Cursor;
			}
			break;
		case 'B':
			if (Cursor != Editor.begin())
			{
				Cursor = Editor.erase((--Cursor));
			}
			break;
		case 'P':
			char Alphabet;
			std::cin >> Alphabet;
			Editor.insert(Cursor, Alphabet);
			break;
		}
	}

	for (const char& Alphabet : Editor)
	{
		std::cout << Alphabet;
	}

	return 0;
}