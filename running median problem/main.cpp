#include <set>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int N;
multiset<int> r;
multiset<int, greater<int> > l;
int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        int a; scanf("%d", &a);
        if (l.empty()) l.insert(a);
        else {
            if (a > *l.begin()) r.insert(a);
            else l.insert(a);
        }
        if (l.size() > r.size() + 1) {
            r.insert(*l.begin());
            l.erase(l.begin());
        } else if (r.size() > l.size()) {
            l.insert(*r.begin());
            r.erase(r.begin());
        }
        if (l.size() > r.size())
            printf("%d.0\n", *l.begin());
        else
            printf("%d.%c\n", (*l.begin() + *r.begin()) / 2, ((*l.begin() + *r.begin()) & 1) ? '5': '0');
    }
    return 0;
}
