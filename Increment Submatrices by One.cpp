class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& q) {
         vector<vector<int>> v(n,vector<int>(n));
         for(auto it :q)
         {
             int x1 = it[0], y1 = it[1];
            int x2 = it[2], y2 = it[3];

            v[x1][y1] += 1;

            if (x2 + 1 < n) 
                v[x2 + 1][y1] -= 1;

            if (y2 + 1 < n) 
                v[x1][y2 + 1] -= 1;

            if (x2 + 1 < n && y2 + 1 < n)
                v[x2 + 1][y2 + 1] += 1;
         }

      for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {

        if (i > 0) v[i][j] += v[i-1][j];
        if (j > 0) v[i][j] += v[i][j-1];
        if (i > 0 && j > 0) v[i][j] -= v[i-1][j-1];
    }
}

         return v;
    }
};
