#include <bits/stdc++.h>
using namespace std;
const double PI = 3.1415926535897932384626433832795;

int main() {
    double r, a, b, c;

    printf("input r: ");
    scanf("%lf", &r);

    a = 2 * r;
    b = 2 * PI * r;
    c = PI * r * r;

    printf("a:%.6lf b:%.6lf c:%.6lf\n\n", a, b, c);

    //printf("\npress any key to continue..."); // bad idea
    system("pause");

    return 0;
}