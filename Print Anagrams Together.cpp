#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        unordered_map<string, vector<string>> um;

        for (const auto& str : string_list) {
            string sorted_str = str;
            sort(sorted_str.begin(), sorted_str.end());

            um[sorted_str].push_back(str);
        }

        vector<vector<string>> result;

        for (const auto& pair : um) {
            result.push_back(pair.second);
        }

        return result;
    }
};
