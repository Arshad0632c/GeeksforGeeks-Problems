class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> res,ans,out;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                res.push_back(arr[i]);
            }
            else{
                ans.push_back(arr[i]);
            }
        }
        for(int j=0;j<ans.size();j++){
            out.push_back(ans[j]);
        }
        for(int k=0;k<res.size();k++){
            out.push_back(res[k]);
        }
        arr=out;
        
        
    }
};