#include <iostream>
#include <string>
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int Count = 0;
	int InputNumber;
	std::cin >> InputNumber;
	
	int NewNumber = InputNumber;
	do
	{
		 int Ten = NewNumber / 10;
        int One = NewNumber % 10;

        int Sum = (Ten + One) % 10;

        NewNumber = (One * 10) + Sum;
		++Count;

	} while (NewNumber != InputNumber);
	
	std::cout << Count;
	return 0;
}