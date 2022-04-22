class Solution {
public:
    void solve(string S, vector<string>&ans,int i) {
        if(i == S.size()) { // base condition
            ans.push_back(S);
            return;
        }
        
        if(isalpha(S[i])) { // if the scanned character is alphabet
        //step_1
            S[i] = toupper(S[i]);
        //step_2
            solve(S,ans,i+1);
        //backtracking_step
            S[i] = tolower(S[i]);
        //step_3
            solve(S,ans,i+1);
        }
        else { // if the scanned character is number
            solve(S,ans,i+1);
        }
    }
    vector<string> letterCasePermutation(string S) {
        vector<string>ans;
        solve(S,ans,0);
        return ans;
    }

};