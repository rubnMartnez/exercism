#include <string>
#include <vector>

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
};

ElectionResult winner{};

// TODO: Task 1
// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.

int vote_count(const ElectionResult& elRes){
    return elRes.votes;
}

// TODO: Task 2
// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.

void increment_vote_count(ElectionResult& elRes, int increment){
    elRes.votes += increment;
}

// TODO: Task 3
// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.

ElectionResult& determine_result(std::vector<ElectionResult>& final_count){
    ElectionResult* winnerPtr{&final_count[0]};

    for (int i = 0; i < final_count.size(); i++){
        if (final_count[i].votes > winnerPtr->votes)
            winnerPtr = &final_count[i];
    }

    winnerPtr->name = "President " + winnerPtr->name;
    winner.name = winnerPtr->name;
    return winner;
}

}  // namespace election


// === just for testing, do not copy ======================================

#include <iostream>

int main(){
    using namespace election;

    ElectionResult option1{"David", 11};
    ElectionResult option2{"Shaw", 12};
    ElectionResult option3{"Ripley", 79};
    ElectionResult option4{"Call", 8};
    std::vector<ElectionResult> final_count{option1, option2, option3, option4};

    ElectionResult& result = determine_result(final_count);
    
    std::cout << result.name << std::endl;
}