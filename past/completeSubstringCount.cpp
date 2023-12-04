int countCompleteSubstrings(string word, int k) {
        int n = word.size();
        int ans = 0, i = 0, start;
        auto calc = [&] (int left, int right) -> int {
            int sub = 0;
            for (int m = 1, meet; m <= 26; m+=1) {
                if (k * m > right - left) break;
                int cnt[26]{0};
                meet = 0;
                for (int r = left, L; r < right; r+=1) {
                    cnt[word[r] - 'a'] += 1;
                    if (cnt[word[r] - 'a'] == k) meet += 1;
                    L = r - k * m + 1;
                    if (L >= left) {
                        if (meet == m) sub += 1;
                        if (cnt[word[L] - 'a'] == k) meet -= 1;
                        cnt[word[L] - 'a'] -= 1;
                    }
                }
            }
            return sub;
        };
        while (i < n) {
            start = i;
            i += 1;
            while (i < n && abs((int) word[i] - word[i-1]) <= 2) i += 1;
            ans += calc(start, i);
        }
        return ans;
    }