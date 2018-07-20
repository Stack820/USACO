/*
  PROG:ride
  NAME:xyym8201
  LANG:C++
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(void) {
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

    string group, comet;

    cin >> group >> comet;

    int calGroup = 1, calComet = 1;
    for (int i = 0; i < group.length(); i++) {
        calGroup *= (group[i] - 'A' + 1);
    }
    for (int i = 0; i < comet.length(); i++) {
        calComet *= (comet[i] - 'A' + 1);
    }

    if (calGroup % 47 == calComet % 47) cout << "GO" << endl;
    else cout << "STAY" << endl;

    return 0;
}