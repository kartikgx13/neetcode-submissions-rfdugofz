class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashmap;

        for(string s : strs){
            //defining a freq array
            vector<int> freq_arr(26,0);

            for(char c : s){
                freq_arr[c - 'a']++;
            }

            //building the key string
            string key;
            for(int num : freq_arr){
                key += "#" + to_string(num);
            }

            hashmap[key].push_back(s);
        }

        vector<vector<string>> result;

        for(auto& kvp:hashmap){
            result.push_back(kvp.second);
        }

        return result;
    }
};
