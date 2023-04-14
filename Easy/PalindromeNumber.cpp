#include <iostream>

bool isPalindrome(int x)
{
    int i = 0;
    if (x < 0 || x % 10 == 0 && x != 0)
    {
        return false;
    }
    while (x > i)
    {
        i = i * 10 + x % 10;
        x /= 10;
    }
    return x == i || x == i / 10;
}

int main()
{
    std::cout << isPalindrome(121) << std::endl;
    std::cout << isPalindrome(-121) << std::endl;
    std::cout << isPalindrome(10) << std::endl;

}