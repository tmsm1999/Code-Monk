#include <iostream>
#include <vector>
using namespace std;

void solve(string s) {
    
    int even = 0;
    int palindrome = 1;
    
    if(s.size() % 2 == 0) {
        even = 1;
    }

    int i = 0;
    int j = s.size() - 1;

    while(i <= j) {
        if(s[i] != s[j]) {
            palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if(palindrome) {
        if(even) {
            printf("YES EVEN\n");
        }
        else {
            printf("YES ODD\n");
        }
    }
    else {
        printf("NO\n");
    }

    return;
}


int main() {

    int n; scanf("%d", &n);
    string s;
    for(int i = 0; i < n; i++) {
        
        cin >> s;
        solve(s);
    }

    return 0;
}