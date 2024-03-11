class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    int ans=0;
	    map<int, int>mp;
	    for(int i=0;i<mat1.size();i++){
	        for(int j=0;j<mat1[0].size();j++){
	            mp[mat1[i][j]]++;
	        }
	    }
	    
	    for(int i=0;i<mat2.size();i++){
	        for(int j=0;j<mat2[0].size();j++){
	            if(mp.find(x - mat2[i][j])!=mp.end())
	                ans++;
	        }
	    }
	    return ans;
	    
	}
};
