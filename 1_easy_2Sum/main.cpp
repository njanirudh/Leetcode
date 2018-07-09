#include <map>
#include <vector>
#include <iostream>
#include <algorithm> // for copy
#include <iterator> // for ostream_iterator

using namespace std;

class Solution_O_N {
public:
    static vector<int> twoSum(vector<int>& nums, int target)
    {
        std::map<int,int> hashmap;
        std::vector<int> output;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            hashmap.insert(std::make_pair(nums[i],i));
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
            int complement = target-nums[i];

            auto find = hashmap.find(complement);

            if(i == find->second)
            {
                continue;
            }

            if(find != hashmap.end())
            {
                output.push_back(i);
                output.push_back(find->second);

                return output;
            }

        }

        // return indices of the vector values
        return output;
    }
};


int main()
{
    vector<int> vector_input;
    vector_input.push_back(5);
    vector_input.push_back(3);
    vector_input.push_back(2);
    vector_input.push_back(6);

    auto output = Solution_O_N::twoSum(vector_input,7);
    std::copy(output.begin(), output.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
