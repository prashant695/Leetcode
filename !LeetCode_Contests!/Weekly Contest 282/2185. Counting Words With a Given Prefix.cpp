class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {
        int cnt = 0, res = 0;
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].substr(0, pref.size()) == pref)
                cnt++;
        }

        return cnt;
    }
};