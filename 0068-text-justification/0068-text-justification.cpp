
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int i = 0;

        while (i < words.size())
        {
            int j = i;
            int lineLength = 0;

            while (j < words.size() && lineLength + words[j].size() + (j - i) <= maxWidth)
            {
                lineLength += words[j].size();
                j++;
            }

            string line;
            int spaces = maxWidth - lineLength;
            int numWords = j - i - 1;

            if (j == words.size() || numWords == 0)
            {
                for (int k = i; k < j; k++)
                {
                    line += words[k];
                    if (k < j - 1) {
                        line += " ";
                        spaces--;
                    }
                }
                line += string(spaces, ' ');
            }
            else 
            {
                int spacesBetweenWords = spaces / numWords;
                int extraSpaces = spaces % numWords;

                for (int k = i; k < j; k++)
                {
                    line += words[k];
                    if (k < j - 1)
                        line += string(spacesBetweenWords + (extraSpaces-- > 0 ? 1 : 0), ' ');
                }
            }

            result.push_back(line);
            i = j;
        }

        return result;
    }
};