class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        int l = s.length();

        for (int i=0; i<l; i++)
            ++arr[s[i]-97];

        for (int i=0; i<l; i++)
            if (arr[s[i]-97] == 1)
                return i;

        return -1;
    }
};
