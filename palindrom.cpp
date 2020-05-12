#include <iostream>
#include <iterator>
#include <algorithm>

bool isPalindrome(const std::string & text)
{
    auto reverse_text = text;

    std::reverse(std::begin(reverse_text), std::end(reverse_text));

    return (text == reverse_text);
}

int main()
{
    std::cout << isPalindrome("kobylamamalybok") << std::endl;
}
