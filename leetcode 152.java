class Solution {
    public int maxProduct(int[] nums) {
        int n=nums.length;
        int max=nums[0];
        int prefix;
        int suffix;
        prefix=suffix=1;
        for(int i=0;i<n;i++){
            prefix *= nums[i];
            suffix *=nums[n-i-1];
            
            max=Math.max(max,Math.max(prefix,suffix));
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;
        }
        return max;

    }
}