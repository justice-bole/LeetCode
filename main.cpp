//Two Sum
//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//You can return the answer in any order.

#include <vector>
#include <unordered_map>

//original solution
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int difference{};
    std::vector<int> answer{};

    for(int i{0}; i < nums.size(); i++) {

        difference = target - nums[i];

        for(int j{i + 1}; j < nums.size(); j++) {

            if(nums[j] == difference) {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
        }
    }

    return answer;

}


//better solution
std::vector<int> twoSum2(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> imap{};

    for(int i{0};;++i) {
        auto iterator{imap.find(target - nums[i])};

        if(iterator != imap.end()) {
            return std::vector<int> {i, iterator->second};
        }

        imap[nums[i]] = i;

    }
}

int main() {
    return 0;
}

