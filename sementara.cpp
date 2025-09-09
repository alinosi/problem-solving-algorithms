class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        map<char, int> romanConvertion = 
        {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        for (int i = 0; i < s.size(); ++i) {
            if ( i != s.size() - 1 && romanConvertion[i] < romanConvertion[i + 1] ) {
                sum += romanConvertion[i + 1] - romanConvertion[i];
            } else {
                sum += romanConvertion[i];
            }
        }
        return sum;
    }
};