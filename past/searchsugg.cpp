#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> suggestedProducts(vector<string> &words, string sw)
    {
        sort(words.begin(), words.end());
        vector<vector<string>> ans;
        int fromWord = 0, n = words.size();
        string ts = "";
        for (char c : sw)
        {
            ts += c;
            fromWord = lower_bound(words.begin(), words.end(), ts) - words.begin();
            ans.push_back({});
            for (int i = fromWord; i < min(fromWord + 3, n); i++)
            {
                if (!words[i].compare(0, ts.length(), ts))
                    break;
                ans.back().push_back(words[i]);
            }
        }
        return ans;
    }
};