class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int cnt = 1;
        string str = a;

        while (str.length() < b.length()) {
            str += a;
            cnt++;
        }

        if (str.find(b) != string::npos) {
            return cnt;
        }

        str += a;
        cnt++;

        if (str.find(b) != string::npos) {
            return cnt;
        }

        return -1;
    }
};
