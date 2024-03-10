

class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string new_str = "";
	    map<char, int> mp;
	    for(char c: str){
	       mp[c]++;
	       if(mp[c]==1)
	        new_str += c;
	    }
	    
	    return new_str;
	}
};
