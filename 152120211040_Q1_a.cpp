#include <iostream>
#include <chrono>  //saati ölçmek için gerekli olan kütüphane

using namespace std;
using namespace std::chrono;

int main() {
    const int m = 9;  
    int arr[m] = { 67, 48, 74, 23, 54, 9, 6, 45,8};  // sisteme random olarak verdiğim 9 adet sayı

    // Start the high-resolution clock to measure elapsed time
    auto start = high_resolution_clock::now();

    // The array is already filled, so no need to assign random values.
    // End the high-resolution clock after the assignment
    auto end = high_resolution_clock::now();

    // Display the array
    cout << "Array elements: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Calculate elapsed time in nanoseconds
    auto duration = duration_cast<nanoseconds>(end - start);
    cout << "Elapsed time: " << duration.count() << " nanoseconds" << endl;

    // Time Complexity: O(m) for displaying the array
    cout << "Time complexity: O(m)" << endl;

    return 0;
}
