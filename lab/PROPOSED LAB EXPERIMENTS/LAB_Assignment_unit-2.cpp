//// 6. Memory Layout Visualization (Stack vs. Heap)
// #include <iostream>
// using namespace std;
// int staticVar = 10; // Static Memory

// int main() {
//     int stackVar = 20;               // Stack Memory
//     int* heapVar = new int(30);      // Heap Memory (Dynamic)

//     cout << "Static Address: " <<&staticVar<<endl;
//     cout << "Stack Address:  " << &stackVar << endl;
//     cout << "Heap Address:   " << heapVar << endl;

//     delete heapVar; // Clean up heap memory
//     return 0;
// }

//// 7. Dynamic Sensor Storage (Pointers)


// #include <iostream>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter number of sensors: ";
//     cin >> size;

//     float* sensors = new float[size]; // Dynamic Allocation

//     for(int i = 0; i < size; i++) {
//         sensors[i] = i * 1.5; // Mock data
//         cout << "Sensor " << i << " Value: " << sensors[i] << endl;
//     }

//     delete[] sensors; // Free memory
//     return 0;
// }



// //8. Robot Position Tracking (STL Vector)
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> path = {10, 20, 35, 50}; // X-coordinates
//     path.push_back(65); // Add new position

//     cout << "Tracking Path: ";
//     for (int pos : path) { // Range-based loop
//         cout << pos << " -> ";
//     }
//     cout << "Done" << endl;
//     return 0;
// }



// //9.  Command Buffer (STL Queue - FIFO)
// #include <iostream>
// #include <queue>
// #include <string>
// using namespace std;

// int main() {
//     queue<string> commands;
//     commands.push("Rotate 90");
//     commands.push("Move 5m");
//     commands.push("Scan Area");

//     while (!commands.empty()) {
//         cout << "Executing: " << commands.front() << endl;
//         commands.pop(); // Remove after execution
//     }
//     return 0;
// }


//// 10.Safe Sensor Input (Exception Handling)   
// #include <iostream>
// #include <stdexcept>
// using namespace std;

// int main() {
//     float distance;
//     cout << "Enter sensor distance: ";
//     cin >> distance;

//     try {
//         if (distance < 0) {
//             throw runtime_error("Negative Distance Detected!");
//         }
//         cout << "Distance safe: " << distance << endl;
//     } 
//     catch (const exception& e) {
//         cout << "ERROR: " << e.what() << endl;
//     }
//     return 0;
// }