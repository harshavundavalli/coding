
class Solution {
    public int rob(int[] nums) {
        int n=nums.length;
        if(n==0) return 0;
        int[] memo=new int[n];
        memo[0]=nums[0];
        if(n>1){
            memo[1]=Math.max(nums[0],nums[1]);
            
            for(int i=2;i<n;i++){
                
                memo[i]=Math.max(nums[i]+memo[i-2],memo[i-1]);
            }
        }
        return memo[n-1];
    }
}