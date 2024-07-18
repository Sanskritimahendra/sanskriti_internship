class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
            int min_diff = INT_MAX;

    for (int i = 0; i + m - 1 < n; i++) {
        int diff = a[i + m - 1] - a[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
        }
};