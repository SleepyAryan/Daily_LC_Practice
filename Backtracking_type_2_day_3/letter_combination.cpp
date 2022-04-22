class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.empty()) return res;
        vector<string>letter({"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"});
        string path = "";
        DFS(digits, 0, path, res, letter);
        return res;
    }
    
    void DFS(string digits, int pos, string& path, vector<string>& res, vector<string>& letter){
        if(pos == digits.size()){
            res.push_back(path);
            return;
        }
        //for loop is used in cases where there are non-binary entires

        // like in this case:

        // 2-abc 3-def

        // we need to find: ad ae af bd be bf 

        //step_1
        for(auto c: letter[digits[pos] - '0']){
            //step_2
            path.push_back(c);
            //step_3
            DFS(digits, pos + 1, path, res, letter);
            //backtracking_step
            path.pop_back();
        }
    }
};