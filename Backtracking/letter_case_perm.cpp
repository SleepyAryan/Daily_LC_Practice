class Solution {
public:
    void solve(vector<string> ans,string s,int i){
        if(i==current.size()-1){
            ans.push_back(s);
            return;
        }
       if(isalpha(s[i])) { 
            s[i] = toupper(s[i]);
            solve(s,ans,i+1);
            s[i] = tolower(s[i]);
            solve(s,ans,i+1);
        }
        else { 
            solve(s,ans,i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        return solve(ans,s,0);
    }
};