#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val)
{
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int val;
    std::cin >> val;
    std::vector<int> nums1{3, 2, 2, 3};
    std::vector<int> nums2{0, 1, 2, 2, 3, 0, 4, 2};
    std::cout << removeElement(nums1, val) << std::endl;
    std::cout << removeElement(nums2, val) << std::endl;
    return 0;
}
