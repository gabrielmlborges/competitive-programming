// #include<iostream>
// #include<sstream>
// using namespace std;
// int main (void) {
//     string l;
//     while (getline(cin, l)) {
//         istringstream iss(l);
//         int v,t,r;
//         iss >> v >> t;
//         cout << 2*v*t << endl;
//     }
// }
#include<stdio.h>
int main(void) {
    int v,t,r;
    while(scanf("%d %d", &v, &t) == 2) {
        r = 2*v*t;
        printf("%d\n", r);
    }
}
