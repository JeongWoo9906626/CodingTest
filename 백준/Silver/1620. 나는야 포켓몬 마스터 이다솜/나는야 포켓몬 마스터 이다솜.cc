#include <iostream>
#include <string>
#include <map>
#include <algorithm>
int main()
{
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int N, M;
    std::cin >> N >> M;
    std::map<std::string, int> Encyclopedia;
    std::vector<std::string> Pokemons;
    Pokemons.resize(N);
    std::string Name;
    for (int i = 0; i < N; i++)
    {
	    std::cin >> Name;
	    Encyclopedia.insert(std::make_pair(Name, i));
	    Pokemons[i] = Name;
    }

    for (int i = 0; i < M; ++i)
    {
	    std::cin >> Name;
	    if (std::isdigit(Name[0]) != false)
	    {
		    int Number = std::stoi(Name) - 1;
		    std::string Monster = Pokemons[Number];
		    std::cout << Monster << "\n";
	    }
	    else
	    {
		    int Number = Encyclopedia[Name] + 1;
		    std::cout << Number << "\n";
	    }
    }

    return 0;
}