class Solution {
   public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> leaderArray;

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (leaderArray.empty() ||
                leaderArray.back() < nums[i]) {  // checks if the leader is
                                                 // less than current element
                leaderArray.push_back(
                    nums[i]);  // inserts the new element to the beginning

                // instead of this if we use insert it will do the job but will
                // create a time complexity of O(N^2)
                //Currently the TC is O(N)
            }
        }
        int k = leaderArray.size();

        reverse(leaderArray.begin(), leaderArray.begin() + k);

        return leaderArray;
    }
};