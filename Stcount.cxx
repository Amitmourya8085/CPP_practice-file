
#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    int count = 0;

    for(int i = 0; s[i] != '\0'; i++) { //\0 is end character
        count++;
    }

    cout << count;
    return 0;
}