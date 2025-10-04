#include <array>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> res(student_scores.size());
    std::transform(student_scores.cbegin(), student_scores.cend(), res.begin(), [](double x){return static_cast<int>(x);});
    return res;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    return std::count_if(student_scores.cbegin(), student_scores.cend(), [](int i){return i <= 40;});
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> resArr;
    int reminder = (highest_score - 40) / 4;
    int scoreAllocator = 0;
    for (int i = 0; i < 4; i++){
        resArr.at(i) = 41 + scoreAllocator;
        scoreAllocator += reminder;
    }
    return resArr;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> resMapping;
    for (int i = 0; i < student_names.size(); i++){
        resMapping.emplace_back(std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return resMapping;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i < student_names.size(); i++)
        if (student_scores[i] == 100) return student_names[i];
    return "";
}


// === just for testing, do not copy ======================================

int main(){
    // round_down_scores({90.33, 40.5, 55.44, 70.05, 30.55, 25.45, 80.45, 95.3, 38.7, 40.3});
    // std::cout << count_failed_students({90,40,55,70,30,25,80,95,38,40}) << std::endl;
    std::vector<int> student_scores {100, 99, 90, 84, 66, 53, 47};
    std::vector<std::string> student_names {"Joci", "Sara","Kora","Jan","Indra","Bern", "Fred"};
    for (int i = 0; i < 4; i++)
        std::cout << student_ranking(student_scores, student_names)[i] << std::endl;

}
    

