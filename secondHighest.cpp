class Solution {
public:
    int secondHighest(string s) {
        set<int> res;
        for(char c : s){
            if(c >= '0' && c <= '9'){
                res.insert(c - '0');
            }
        }
        if(res.size() < 2) return -1;
        auto it = res.rbegin();
        advance(it, 1);
        return *it;
    }
};