#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int help(int n, string vowels, int v){
        if(n==0)
            return 1;
        if(v>4)
            return 0;
        int take=help(n-1, vowels, v);
        int nottake=help(n, vowels, v+1);
        return take+nottake;
    }
    int countVowelStrings(int n)
    {
        string vowels="aeiou";
        return help(n,vowels,0);
    }
};

int main()
{
    Solution s;
    cout << s.countVowelStrings(2);
    cout << endl;
}