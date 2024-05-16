#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int tc;
    char n[101];
    cin >> tc;

        while(tc--) {
        cin >> n;
        int length = strlen(n);
        int lastdigit = n[length - 1] - '0';

        if(lastdigit % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    return 0;
}
