#include <iostream>

using namespace std;
int main() {
    
    auto add = [](int x, int y) {return x+y;};
    
    cout << add(5, 6) << endl;

    return 0;
}