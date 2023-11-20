class Solution {
    vector<int> tmp;
    int ans = 0;
    void solve(vector<int> &A, int begin, int end) {
        if (begin + 1 >= end) return;
        int mid = (begin + end) / 2, i = begin, j = mid, k = begin, t = mid;
        solve(A, begin, mid);
        solve(A, mid, end);
        for (; i < mid; ++i) {
            while (j < end && A[j] < A[i]) {
                tmp[k++] = A[j++];
            }
            while (t < end && (long)A[t] * 2 < A[i]) ++t;
            ans += t - mid;
            tmp[k++] = A[i];
        }
        for (; j < end; ++j) tmp[k++] = A[j];
        for (int i = begin; i < end; ++i) A[i] = tmp[i];
    }
public:
    int reversePairs(vector<int>& A) {
        tmp.assign(A.size(), 0);
        solve(A, 0, A.size());
        return ans;
    }
};
