// //First Robotics Program using GCC/G++
// #include <iostream>
// using namespace std;
// // lab experiment-1
// int main() {
//     cout << "Robotics System Online. Initializing..." <<endl;
    

// //------------------------------------------------------------
// // lab experiment-1
// //2. Obstacle Decision System (if-else)


//     int distance;
//     cout << "Enter obstacle distance (cm): ";
//     cin >> distance;

//     if (distance < 20) {
//         cout << "STOP: Obstacle too close! Initiating reverse." << endl;
//     } else {
//         cout << "PATH CLEAR: Moving forward." << endl;
//     }
// //----------------------------------------------------------------------------
// // lab experiment-3  Repetitive Movement (Loops)
// #include <iostream>
// using namespace std;

// void moveForward() {
//     cout << "Motors ON: Moving Forward." << endl;
// }

// void setDirection(string dir) {
//     cout << "Steering adjusted to: " << dir << endl;
// }

// int main() {
//     moveForward();
//     setDirection("Left");
//     return 0;
// }


//     // For loop: Move forward 5 steps
//     for(int i = 1; i <= 5; i++) {
//         cout << "Step " << i << " completed." << endl;
//     }

//     // While loop: Simulating battery drain
//     int battery = 3;
//     while(battery > 0) {
//         cout << "Scanning... Battery at " << battery << "%" << endl;
//         battery--;
//     }





    
//     return 0;
// }

//4. Modular Operations (Functions)


//5. Menu-Driven Control (switch-case)

// #include <iostream>
// using namespace std;

// // 1. FUNCTIONS: Simple blocks for robot actions
// void forward() {
//     cout << "Robot moving forward..." << endl;
// }

// void stop() {
//     cout << "Robot stopped." << endl;
// }

// int main() {
//     int cmd = 0;

//     // 2. LOOP: Keeps the menu open until you choose '3' to exit
//     while (cmd != 3) {
//         cout << "\n1. Forward\n2. Stop\n3. Exit\nChoice: ";
//         cin >> cmd;

//         // 3. SWITCH-CASE: Decides which function to run
//         switch (cmd) {
//             case 1:
//                 forward();
//                 break;
//             case 2:
//                 stop();
//                 break;
//             case 3:
//                 cout << "System Off." << endl;
//                 break;
//             default:
//                 cout << "Invalid!" << endl;
//         }
//     }
//     return 0;
// }