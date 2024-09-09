#include <iostream>
#include <vector>
int main()
{
    std::vector<int> Rect;
	Rect.emplace_back(1);
	Rect.emplace_back(3);

	int Number = 0;
	std::cin >> Number;
	int Check = Number;

	int Index = 2;
	while (Number >= 2)
	{
		Rect.emplace_back((Rect[Index - 1] + Rect[Index - 2] * 2) % 10007);
		++Index;
		--Number;
	}
	std::cout << Rect[Check - 1];
	return 0;
}