class Solution {
  public:
    int prime_Sum(int n) {
        int sum=0;
        for(int i=2;i<=n;i++){
            bool flag=true;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    flag=false;
                    break;
                }
            }
             if(flag){
                sum=sum+i;
             }
        }
        return sum;
       
    }
};