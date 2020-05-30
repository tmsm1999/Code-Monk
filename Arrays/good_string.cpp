#include <iostream>
#include <limits>
using namespace std;

int solve(string s) {

    int count = 0;
    int max = INT32_MIN;

    for(int i = 0; i < s.size(); i++) {

        if(s[i] - 'a' == 0 || s[i] - 'e' == 0 || s[i] - 'i' == 0 || s[i] - 'o' == 0 || s[i] - 'u' == 0) {
            count += 1;

            if(count > max) {
                max = count;
            }
        }
        else {
            count = 0;
        }
    }

    if(max < 0) {
        return 0;
    }

    return max;
}

int main() {

    string s;
    cin >> s;

    printf("%d\n", solve(s));

    return 0;
}