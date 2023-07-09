class Solution {
    public int countPrimes(int n) {
        int count=0;
        int arr[]=new int[n+1]; //default 0 
        //0---->prime,1---->composite
        // for(int i=0;i<=n;i++){
        //     arr[i]=0;
        // }
        if(n==0||n==1) return 0;
        for(int i=2;i<=(int)Math.sqrt(n);i++){
            if(arr[i]==0){
                for(int j=i*i;j<n;j=j+i){
                    arr[j]=1;
                }
                
            }
        }
        for(int i=2;i<=n;i++){
            if(arr[i]==0) count++;
        }
        return count-1;
        
    }
}