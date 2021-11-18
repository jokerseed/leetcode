
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (unsigned i = 0; i < nums.size() - 1; i++)
        {
            for (unsigned j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    vector<int> result = { (int)i,(int)j };
                    return result;
                }
            }
        }
        return {};
    }
};

int main()
{
    int target = 9;
    vector<int> nums = { 2,7,9,11 };
    Solution s;
    cout << s.twoSum(nums, target)[0] << endl;
    cout << s.twoSum(nums, target)[1] << endl;
}
