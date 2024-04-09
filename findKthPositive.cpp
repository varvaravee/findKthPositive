class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int current=1;
        int index=0;
        int answer=0;

        while (k) {
            if (index<arr.size()) {
                if (arr[index] == current)
                    index++;
                else {
                    k--;
                    answer = current;
                }

            }
            else {
                k--;
                answer=current;
            }
            current++;
        }
        return answer;
    }
};
