// The API isBadVersion is defined.
bool isBadVersion(int version);

// for solving of problem the dichotomy method is used
class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left + 1 < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid))
                right = mid;
            else
                left = mid;
        }
        if (isBadVersion(left))
            return left;
        return right;
    }
};