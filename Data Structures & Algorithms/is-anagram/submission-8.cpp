class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> hashmap;

        for(char c : s){
            hashmap[c]++;
        }

        for(char c : t){
            hashmap[c]--;
        }

        for(auto kvp : hashmap){
            if(kvp.second != 0){
                return false;
            }
        }

        return true;
    }
};
