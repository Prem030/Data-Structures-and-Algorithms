#include <iostream>
using namespace std;

string simplifyString(string str){
    string s = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]) || (str[i] >= '0' && str[i] <= '9'))
        {
            s += tolower(str[i]);
        }
    }
    return s;
}

bool checkPalindrome(string newStr, int start, int end, bool isPalindrome){
    if (start >= end)
        return isPalindrome;
    else
    {
        if (newStr[start] != newStr[end])
        {
            isPalindrome = false;
            return isPalindrome;
        }
        else
            isPalindrome = checkPalindrome(newStr, start + 1, end - 1, isPalindrome);
    }
    return isPalindrome;
}

bool isPalindrome(string s)
{
    string newString = simplifyString(s);

    if (newString.length() == 0 || newString.length() == 1)
        return true;
    else
    {
        bool isPalindrome = checkPalindrome(newString, 0, newString.length() - 1, true);
        return isPalindrome;
    }
}
int main()
{
    string s;
    getline(cin, s);
    cout<<(bool)isPalindrome(s);
    return 0;
}