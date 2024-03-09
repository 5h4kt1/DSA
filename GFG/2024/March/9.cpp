
class Solution{
  public:
    char nthCharacter(string s, int r, int n) {

       for(int i=0;i<r;i++){
           string new_s = "";
           for(int j=0;j<=n;j++){
                char c = s[j];
                if(c=='0')
                    new_s += "01";
                else
                    new_s += "10";
           }
           s = new_s;
       }
        return s[n];
    }
};
