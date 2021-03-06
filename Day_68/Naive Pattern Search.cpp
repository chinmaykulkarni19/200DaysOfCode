class Solution
{
public:
    // Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt)
    {

        int m = pat.size();
        int n = txt.size();
        for (int i = 0; i <= (n - m); i++)
        {
            int j;
            for (j = 0; j < m; j++)
            {
                if (pat[j] != txt[i + j])
                    break;
            }
            if (j == m)
                return true;
        }
        return 0;
    }
};