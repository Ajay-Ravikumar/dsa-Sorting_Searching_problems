/* Nth root using binary search */

#include <stdio.h>
#include <math.h>

double nthRoot(int n, int x) {
    double l = 1, r = x, eps = 1e-6;
    while (r - l > eps) {
        double mid = (l + r) / 2.0;
        if (pow(mid, n) < x) l = mid;
        else r = mid;
    }
    return l;
}

int main() {
    int n = 3, x = 27;
    printf("%dth Root of %d = %.6f\n", n, x, nthRoot(n, x));
}
