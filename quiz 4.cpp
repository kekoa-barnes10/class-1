#include <iostream>
#include <string>
using namespace std;

template <typename T>
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << "Max of 3 and 5 is: " << myMax<int>(3, 5) << endl;
    cout << "Max of 3.14 and 2.71 is: " << myMax<float>(3.14f, 2.71f) << endl;
    cout << "Max of apple and banana is: " << myMax<string>("apple", "banana") << endl;
    return 0;
}
