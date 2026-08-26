class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int low = 1;
       int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long hours = 0;

            for (int i=0;i<piles.size();i++) {
                hours += piles[i] / mid;

                if (piles[i] % mid != 0) {
                   hours++;
            }
            }

            if (hours <= h) {
                high = mid - 1; 
            } else {
                low = mid + 1; 
            }
        }

        return low;
    }
};