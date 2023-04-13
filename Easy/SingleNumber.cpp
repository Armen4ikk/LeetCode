#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums)
{
    int res = 0;
    for (int i : nums)
    {
        res ^= i;
    }
    return res;
}
int main()
{
    std::vector<int> nums1{2, 2, 1};
    std::cout << singleNumber(nums1) << std::endl;
    std::vector<int> nums2{4, 1, 2, 1, 2};
    std::cout << singleNumber(nums2) << std::endl;
    return 0;
}
