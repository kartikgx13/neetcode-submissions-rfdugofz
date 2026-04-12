class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;

        for(int num : nums){
            if(hashset.find(num) == hashset.end()){
                hashset.insert(num);
            }
            else{
                return num;
            }
        }

        return -1;
    }
};
