class Solution {
public:
vector<string> v;
string current;
vector<string> mp = {
    "",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};
void solve(string digits,int index)
{
    if(index == digits.size())
    {
        v.push_back(current);
        return;
    }
    string letters = mp[digits[index] - '0'];;

    for(auto ch :letters )
    {
        current += ch;

        solve(digits, index+1);

        current.pop_back();
    }
}


    vector<string> letterCombinations(string digits) {

    solve(digits,0);
        return v;
    }
};