#include "high_scores.h"

#include <algorithm>

namespace arcade {

std::vector<int> HighScores::list_scores() {
    // TODO: Return all scores for this session.
    return scores;
}

int HighScores::latest_score() {
    // TODO: Return the latest score for this session.
    return scores.back();
}

int HighScores::personal_best() {
    // TODO: Return the highest score for this session.
    auto it = std::max_element(scores.begin(), scores.end());
    return *it;
}

std::vector<int> HighScores::top_three() {
    // TODO: Return the top 3 scores for this session in descending order.
    std::vector<int> sortedScores{scores};
    std::sort(sortedScores.begin(), sortedScores.end(), std::greater<int>());
    std::vector<int> resVec{};
    resVec.reserve(3);
    int i = 0; 
    for (int score : sortedScores){
        if (i == 3) break;
        resVec.emplace_back(score);
        i++;
    }
    return resVec;
}

}  // namespace arcade

