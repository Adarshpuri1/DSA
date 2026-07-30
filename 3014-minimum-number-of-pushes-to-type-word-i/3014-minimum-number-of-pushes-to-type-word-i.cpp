class Solution {
public:
    int minimumPushes(string word) {

        int n = word.size();
        int sum = 0;

        // Calculate the pushes required for each character
        for (int i = 0; i < n; i++) {
            sum += i / 8 + 1;
        }

        return sum;
    }
};