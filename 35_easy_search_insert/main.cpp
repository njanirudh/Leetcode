#include <iostream>
#include <algorithm>

using namespace std;

// Using std::lower_bound
// Returns an iterator pointing to the first element in the range [first, last]
// which does not compare less than val.

class Solution {
public:
    static int searchInsert(vector<int>& nums, int target) {

        if(nums.size() == 0)
        {
            return 0;
        }

        auto iter = std::lower_bound(nums.begin(), nums.end(), target);

        return (iter - nums.begin());

    }

};

int main()
{
    vector<int> input = {1,3,5,6};
    cout<<Solution::searchInsert(input,2)<<endl;
    return 0;
}
