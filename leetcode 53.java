class Solution {
    public int maxSubArray(int[] nums) {
        int max=nums[0];
        int n=nums.length;
        int memo[] = new int[n];
        memo[0]=nums[0];
        int sum=0;
        for(int i=1;i<n;i++){
            memo[i]=Math.max(memo[i-1]+nums[i],nums[i]);
            max=Math.max(max,memo[i]);
        }
        return max;
    }
}