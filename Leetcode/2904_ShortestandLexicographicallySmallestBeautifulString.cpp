# include <iostream>
using namespace std;

class Solution {
    string helper(string a, string b){
        if ( a == "") return b;
        if ( a.size() > b.size()) return b;
        if ( a.size() < b.size()) return a;
        for (int i = 0; i < a.size(); i++){
            if (a[i] != b[i]){
                if ( a[i] == '0') return a;
                else return b;
            }
        }
        return a;
    }
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int l = 0, r = 0, cnt = 0;
        int n = s.size();
        while(r < n){
            if (s[r] == '1') cnt++;
            while ( cnt >= k){
                if (cnt == k){
                    string t(s.begin()+l, s.begin()+r+1);
                    ans = helper(ans, t); 
                    // cout << ans << ' ' << t << '\n';
                }
                if (s[l] == '1') cnt--;
                l++;
            }
            r++;
        }
        return ans;
    }
};