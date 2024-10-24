#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <sstream>


using namespace std;

int solution(std::vector<std::string> friends, std::vector<std::string> gifts)
{
    int answer = 0;
    std::unordered_map<std::string, std::unordered_map<std::string, int>> PersonGiftList;
    std::unordered_map<std::string, int> NextMonthGiftCount;
    std::unordered_map<std::string, int> GiftIndex;
    for (int i = 0; i < gifts.size(); ++i)
    {
        std::stringstream ss(gifts[i]);
        std::string Give;
        std::string Get;
        ss >> Give >> Get;

        ++PersonGiftList[Give][Get];
        ++GiftIndex[Give];
        --GiftIndex[Get];
    }

    for (const std::string& Give : friends)
    {
        for (const std::string& Get : friends)
        {
            if (Give == Get)
            {
                continue;
            }

            int GiveToReceiveCount = PersonGiftList[Give][Get];
            int GetToGiveCount = PersonGiftList[Get][Give];
            if (GiveToReceiveCount > GetToGiveCount)
            {
                ++NextMonthGiftCount[Give];
            }
            else if (GiveToReceiveCount < GetToGiveCount)
            {
                ++NextMonthGiftCount[Get];
            }
            else
            {
                if (GiftIndex[Give] > GiftIndex[Get])
                {
                    ++NextMonthGiftCount[Give];
                }
                else if (GiftIndex[Give] < GiftIndex[Get])
                {
                    ++NextMonthGiftCount[Get];
                }
            }

        }
    }

    for (const std::pair<std::string, int>& Temp : NextMonthGiftCount)
    {
        answer = std::max(answer, Temp.second);
    }
    answer /= 2;
    return answer;
}