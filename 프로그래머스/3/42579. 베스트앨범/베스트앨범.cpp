#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool PlayCompare(const std::pair<std::string, int>& Left, const std::pair<std::string, int>& Right)
{
    return Left.second > Right.second;
}

bool CountCompare(const std::pair<int, int>& Left, const std::pair<int, int>& Right)
{
    if (Left.second == Right.second)
    {
        return Left.first < Right.first;
    }
    return Left.second > Right.second;
}

std::vector<int> solution(std::vector<std::string> genres, std::vector<int> plays)
{
    std::vector<int> answer;

    // 장르별 전체 음악 재생 횟수
    std::unordered_map<std::string, int> GenrePerPlayCount;
    // 장르별 각 노래에 대한 재생 횟수
    std::unordered_map<std::string, std::vector<std::pair<int, int>>> MusicPerPlayCount;
   
    for (int i = 0; i < genres.size(); ++i)
    {
        GenrePerPlayCount[genres[i]] += plays[i];
        MusicPerPlayCount[genres[i]].push_back({ i, plays[i] });
    }

    // 장르 중 가장 많이 재생된 장르 선택
    // map은 정렬이 되지 않으니 벡터로 변경 후 정렬
    std::vector<std::pair<std::string, int>> GenrePerPlayCountVec;
    for (std::pair<std::string, int> PlayCount : GenrePerPlayCount)
    {
        GenrePerPlayCountVec.push_back(PlayCount);
    }
    std::sort(GenrePerPlayCountVec.begin(), GenrePerPlayCountVec.end(), PlayCompare);

    for (std::pair<std::string, int> PlayCount : GenrePerPlayCountVec)
    {
        std::vector<std::pair<int, int>> Temp = MusicPerPlayCount[PlayCount.first];
        std::sort(Temp.begin(), Temp.end(), CountCompare);
        for (int i = 0; i < std::min(2, static_cast<int>(Temp.size())); ++i)
        {
            std::pair<int, int> Check = Temp[i];
            answer.push_back(Check.first);
        }
    }

    return answer;
}