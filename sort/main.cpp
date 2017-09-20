#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a[10] = {3,2,4,6,75,7,532,3,4,5};
    int n = 10;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }

        }

    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    // cout << "Hello world!" << endl;
    return 0;
}
