class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n=nums.length;
        Map<Integer,Integer> m = new HashMap<>();
        for(int i=0;i<n;i++){
            m.put(nums[i],i);
        }
        for(int i=0;i<n;i++){
            int req=target-nums[i];
            if(m.containsKey(req)&& m.get(req) !=i){
               return new int[]{i, m.get(req)};
            }

        }
        return new int[]{-1,-1};
    }
}