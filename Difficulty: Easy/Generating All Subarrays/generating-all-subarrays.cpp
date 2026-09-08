class Solution {
	public:
	vector<vector<int>> getSubArrays(vector<int>& arr) {
		vector<vector<int>> res;
		for (int i = 0; i < arr.size(); i++) {
			vector<int> temp;
			for (int j = i; j < arr.size(); j++) {
				temp.push_back(arr[j]);
				res.push_back(temp);
			}
			
		}
		return res;
	}
};
