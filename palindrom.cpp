#include <iostream>

bool isPalindrome(const std::string & text)
{
    size_t len = text.length();

    for (int i = 0; i < len; ++i)
    {
        if(text[i] != text[len -1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::cout << isPalindrome("ala") << std::endl;
}
