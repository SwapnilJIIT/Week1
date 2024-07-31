#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "ENTER SIZE OF ARRAY : ";
    cin >> n;
    int a, sum = 0;
    cout << "ENTER " << n << "  ELEMENTS : ";
    for (int i = 0; i < n; ++i) {
        cin >> a;
        sum += a;
    }

    cout << "Average of all elements is " << (float)sum / n << endl;

    return 0;
}
