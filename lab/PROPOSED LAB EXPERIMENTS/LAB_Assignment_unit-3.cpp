#include <iostream>
#include <vector>
#include <string>
#include <memory>

// Task 11: Encapsulation & Actuator Control
class Actuator {
private:
    int id;
    double position; 

public:
    Actuator(int actuatorId) : id(actuatorId), position(0.0) {
        std::cout << "[Output 12] Constructor: Actuator " << id << " hardware initialized.\n";
    }

    // Task 12: Resource Management (Destructor)
    ~Actuator() {
        std::cout << "[Output 12] Destructor: Actuator " << id << " powered down safely.\n";
    }

    void moveTo(double target) {
        if (target >= 0 && target <= 180) { 
            position = target;
            std::cout << "[Output 11] Encapsulated Move: Actuator " << id << " set to " << position << "°.\n";
        }
    }
};

// Task 13: Inheritance & Polymorphism
class Robot {
protected:
    std::string modelName;
public:
    Robot(std::string name) : modelName(name) {}
    virtual void performTask() = 0; 
    virtual ~Robot() {}
};

class Drone : public Robot {
public:
    Drone(std::string name) : Robot(name) {}
    void performTask() override {
        std::cout << "[Output 13] Polymorphic Action: " << modelName << " is patrolling aerial coordinates.\n";
    }
};

class Rover : public Robot {
public:
    Rover(std::string name) : Robot(name) {}
    void performTask() override {
        std::cout << "[Output 13] Polymorphic Action: " << modelName << " is traversing terrain.\n";
    }
};

// Task 14: Composition-Based Modeling
class IntegratedRobot {
private:
    std::string systemID;
    Actuator arm; // Composition: IntegratedRobot HAS-AN Actuator

public:
    IntegratedRobot(std::string id) : systemID(id), arm(505) {}

    void startOperation() {
        std::cout << "[Output 14] Composition: " << systemID << " activating internal components...\n";
        arm.moveTo(45.0);
    }
};

int main() {
    std::cout << "--- ROBOTICS ASSIGNMENT EXECUTION ---\n\n";

    // --- Task 11 & 12 Demo ---
    std::cout << "TASK 11 & 12: ENCAPSULATION AND LIFECYCLE\n";
    {
        Actuator joint(101); // Constructor called here
        joint.moveTo(120.5); // Encapsulated method
    } // Destructor called here as 'joint' goes out of scope
    std::cout << "--------------------------------------\n\n";


    // --- Task 13 Demo ---
    std::cout << "TASK 13: INHERITANCE AND RUNTIME POLYMORPHISM\n";
    Robot* bot1 = new Drone("Falcon-X");
    Robot* bot2 = new Rover("Mars-Pathfinder");
    
    bot1->performTask();
    bot2->performTask();
    
    delete bot1;
    delete bot2;
    std::cout << "--------------------------------------\n\n";


    // --- Task 14 Demo ---
    std::cout << "TASK 14: COMPOSITION-BASED MODELING\n";
    IntegratedRobot heavyUnit("Titan-Prime");
    heavyUnit.startOperation();
    std::cout << "--------------------------------------\n\n";


    // --- Task 15 Demo ---
    std::cout << "TASK 15: SMART POINTERS & AUTO-CLEANUP\n";
    {
        std::unique_ptr<Robot> smartDrone = std::make_unique<Drone>("Smart-Eye-01");
        smartDrone->performTask();
        std::cout << "[Output 15] Smart pointer is managing 'Smart-Eye-01'. No manual delete required.\n";
    } // Automatic cleanup happens here
    std::cout << "--------------------------------------\n\n";

    return 0;
}