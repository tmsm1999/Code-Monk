#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> v, int k) {

    vector<int> aux(v.size(), 0);

    for(int i = 0; i < v.size(); i++) {
        aux[(i + k) % v.size()] = v[i];
    }

    v = aux;

    for(int l = 0; l < v.size(); l++) {

        if(l == v.size() - 1) {
            printf("%d\n", v[l]);
        }
        else {
            printf("%d ", v[l]);
        }
    }

    return;
} 

int main() {

    int cases; scanf("%d", &cases);

    for(int i = 0; i < cases; i++) {

        int n, k; scanf("%d %d", &n, &k);
        int elem = 0;
        vector<int> v;

        for(int j = 0; j < n; j++) {
            scanf("%d", &elem);
            v.push_back(elem);
        }

        solve(v, k % n);
    }

    return 0;
}