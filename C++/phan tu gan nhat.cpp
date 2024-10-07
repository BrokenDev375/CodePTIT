#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t; // Number of test cases
    while (t--) {
        int n, k, x;
        std::cin >> n; // Size of the array
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i)
            std::cin >> a[i]; // Elements of the array
        std::cin >> k >> x; // k: number of surrounding elements, x: target element

        std::sort(a.begin(), a.end()); // Sort the array

        // Find the index of the target element x
        int index = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] == x) {
                index = i;
                break;
            }
        }

        // Print k/2 elements before x
        for (int i = index - (k / 2); i < index; ++i)
            std::cout << a[i] << " ";

        // Print k/2 elements after x
        for (int i = index + 1; i <= index + (k / 2); ++i)
            std::cout << a[i] << " ";

        std::cout << std::endl; // Newline for the next test case
    }
}
