// //Lab Experiment 16: Robot Status Management
// #include <iostream>
// #include <cstdint>

// // Enumeration for Robot States
// enum RobotState { IDLE, MOVING, ERROR, CHARGING };

// // Bitwise flags for specific status indicators
// enum StatusFlags {
//     BATTERY_LOW = 0x01,  // 0001
//     OBSTACLE_NEAR = 0x02, // 0010
//     GPS_FIX      = 0x04, // 0100
//     WIFI_READY   = 0x08  // 1000
// };

// int main() {
//     RobotState currentState = IDLE;
//     uint8_t systemStatus = 0x00; // Initialize with no flags set

//     // Set flags (using OR)
//     systemStatus |= WIFI_READY;
//     systemStatus |= OBSTACLE_NEAR;

//     std::cout << "State: " << currentState << std::endl;
    
//     // Check flags (using AND)
//     if (systemStatus & OBSTACLE_NEAR) {
//         std::cout << "Warning: Obstacle detected!" << std::endl;
//     }

//     // Clear a flag (using AND with NOT)
//     systemStatus &= ~OBSTACLE_NEAR;

//     return 0;
// }

//Lab Experiment 17: Sensor Execution Profiling


#include <iostream>
#include <chrono>
#include <thread>

// Use the namespace to simplify calls if the IDE is confused
using namespace std;
using namespace std::chrono;

void readSensor() {
    // Simulate sensor delay (e.g., I2C communication)
    // If this_thread still shows an error, ensure you are compiling with -std=c++11 or higher
   // this_thread::sleep_for(milliseconds(15));
}

int main() {
    // 1. Capture start time
    high_resolution_clock::time_point start = high_resolution_clock::now();

    // 2. Execute the function to be profiled
    readSensor();

    // 3. Capture end time
    high_resolution_clock::time_point end = high_resolution_clock::now();

    // 4. Calculate duration
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Sensor Execution Time: " << duration.count() << " microseconds" << endl;

    return 0;
}


// // //Lab Experiment 18: Data Serialization
// #include <iostream>
// #include <cstring>

// // Pack structure to avoid compiler padding for predictable byte size
// #pragma pack(push, 1)
// struct SensorPacket {
//     uint16_t sensorID;
//     float temperature;
//     uint32_t timestamp;
// };
// #pragma pack(pop)

// int main() {
//     SensorPacket myData = {101, 25.5f, 1625400};
//     uint8_t buffer[sizeof(SensorPacket)];

//     // Serialization: Struct to Byte Array
//     std::memcpy(buffer, &myData, sizeof(SensorPacket));
//     std::cout << "Data serialized into " << sizeof(buffer) << " bytes." << std::endl;

//     // Deserialization: Byte Array back to Struct
//     SensorPacket receivedData;
//     std::memcpy(&receivedData, buffer, sizeof(SensorPacket));

//     std::cout << "Deserialized ID: " << receivedData.sensorID << " Temp: " << receivedData.temperature << std::endl;

//     return 0;
// }


// //Lab Experiment 19 & 20: Real-Time Control Loop & Analysis
// #include <iostream>
// #include <chrono>
// #include <thread>
// #include <vector>

// using namespace std;
// using namespace std::chrono;

// // If std::this_thread is still red, ensure your compiler flags include -std=c++11
// // and -pthread if you are on a Linux-based system.

// int main() {
//     const int frequency_hz = 10;
//     const milliseconds interval(1000 / frequency_hz);
//     const int total_cycles = 20;
    
//     vector<long long> latencies;
//     int deadline_misses = 0;

//     // Use steady_clock for monotonic time (essential for real-time loops)
//     auto next_tick = steady_clock::now();

//     for (int i = 0; i < total_cycles; ++i) {
//         auto loop_start = steady_clock::now();

//         // --- Simulated Robotic Task ---
//         // Replacing this_thread::sleep_for with a manual wait if needed
//         // this_thread::sleep_for(milliseconds(20)); 
//         // ------------------------------

//         auto loop_end = steady_clock::now();
//         auto actual_work_time = duration_cast<milliseconds>(loop_end - loop_start).count();
//         latencies.push_back(actual_work_time);

//         // Check if the work exceeded the allowed time frame (Exp 20)
//         if (actual_work_time > interval.count()) {
//             deadline_misses++;
//         }

//         // Enforcement: Wait until the next precise interval
//         next_tick += interval;
        
//         // This ensures the loop triggers at exactly 100ms, 200ms, etc.
//         // this_thread::sleep_until(next_tick);
//     }

//     // Timing Analysis Report (Exp 20)
//     cout << "\n--- Timing Analysis Report ---" << endl;
//     cout << "Total Cycles:    " << total_cycles << endl;
//     cout << "Deadline Misses: " << deadline_misses << endl;
//     cout << "Target Interval: " << interval.count() << "ms" << endl;
//     cout << "Safety Status:   " << (deadline_misses == 0 ? "PASSED" : "CRITICAL") << endl;

//     return 0;
// }