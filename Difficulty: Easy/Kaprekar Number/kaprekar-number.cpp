class Solution {
  public:
    bool isKaprekar(int n) {
        int org = n;
        long sqr=n*n;
        int count=0;
        while(n!=0){
            count++;
            n=n/10;
        }
        
        int power = pow(10,count);
        
        
        int r = sqr % power;
        
        int l = sqr / power;
        
        return (l+r) ==org;
    }
};