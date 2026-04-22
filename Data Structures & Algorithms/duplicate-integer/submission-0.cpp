class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      int placehold;
      for (int i =0; i<nums.size(); i++){
        placehold = nums[i];
        for (int j = 0; j<nums.size();j++){
            if (j!=i && nums[j] == placehold){
                return true;
            }
        }
      }
      return false;
      
      
    }
};