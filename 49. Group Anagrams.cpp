class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        for(int i = 0; i < strs.size();i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            if(m.find(s) == m.end())
            {                
                vector<string> v;
                m[s] = v;
                m[s].push_back(strs[i]);
            }
            else m[s].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        map<string,vector<string>>::iterator i;
        for(i = m.begin(); i!=m.end();i++)
        {
            ans.push_back(i->second);
        }
        return ans;
    }
};
