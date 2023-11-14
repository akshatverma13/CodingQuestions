class Solution {
public:
    int findKthPositive(vector<int>& A, int k) {
        for (int i = 1, j = 0; i <= 2000; ++i) {
            if (j < A.size() && A[j] == i) ++j;
            else if (--k == 0) return i;
        }
        return -1;
    }
};
