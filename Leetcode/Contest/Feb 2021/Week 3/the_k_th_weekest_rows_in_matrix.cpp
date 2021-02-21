bool compare(pair<int,int> p1, pair<int,int> p2) {
        if(p1.second<p2.second) return 1;
        else if(p1.first<p2.first && p1.second==p2.second) return 1;
        else return 0;
}

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> res(mat.size());
        for(int i=0;i<mat.size();i++) {
            res[i].first=i;
            res[i].second=0;
            for(int j=0;j<mat[i].size() && mat[i][j]==1;j++) {
                res[i].second++;
            }
        }
        sort(res.begin(),res.end(),compare);
        vector<int> result;
        for(int i=0;i<res.size() && i<k;i++) {
            result.push_back(res[i].first);
        }
        return result;
    }
};