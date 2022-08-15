Output Status : 

Runtime: 19 ms, faster than 50.83% of C++ online submissions for Roman to Integer.
Memory Usage: 8.2 MB, less than 21.24% of C++ online submissions for Roman to Integer.


class Solution {
public:
    int romanToInt(string s) {
        
        int n = s.size();
        
        map<char,int> mp;
        
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
        
        int res = mp[s[n-1]];
        
        for(int i=n-2;i>=0;i--){
            
            if(mp[s[i]] < mp[s[i+1]])
                res -= mp[s[i]];
            else
                res += mp[s[i]];
        }
        return res;
    }
};
