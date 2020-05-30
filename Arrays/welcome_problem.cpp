#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> a, vector<int> b) {

    for(int i = 0; i < a.size(); i++) {

        if(i == a.size() - 1) {
            printf("%d\n", a[i] + b[i]);
            break;
        }

        printf("%d ", a[i] + b[i]);
    }
}

int main() {

    int n; scanf("%d", &n);
    int elem = 0;

    vector<int> a;
    for(int i = 0; i < n; i++) {
        scanf("%d", &elem);
        a.push_back(elem);
    }

    vector<int> b;
    for(int i = 0; i < n; i++) {
        scanf("%d", &elem);
        b.push_back(elem);
    }

    solve(a, b);

    return 0;
}