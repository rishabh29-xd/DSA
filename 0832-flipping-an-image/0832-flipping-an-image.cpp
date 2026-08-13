class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (vector<int>& row : image) {
            reverse(row.begin(), row.end());

            for (int i = 0; i < row.size(); i++) {
                row[i] = 1 - row[i];
            }
        }

        return image;
    }
};