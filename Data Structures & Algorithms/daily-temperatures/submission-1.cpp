class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res;

        int i = 0;
        int j = 1;

        while (i < n) {

            if (j >= n) {
                res.push_back(0);
                i++;
                j = i + 1;
                continue;
            }

            if (temperatures[j] > temperatures[i]) {
                res.push_back(j - i);
                i++;
                j = i + 1;
            }
            else {
                j++;
            }
        }

        return res;
    }
};