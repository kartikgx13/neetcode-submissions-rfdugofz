class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;

        for(int n : nums){
            if(hashset.find(n) != hashset.end()){
                return true;
            }
            else{
                hashset.insert(n);
            }
        }

        return false;
    }
};