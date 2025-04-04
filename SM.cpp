# Student_management
#include <iostream>
#include <vector>

class Student {
private:
    std::string name;
    float roll1;
    float marks[3];


public:
    void input() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter roll number: ";
        std::cin >> roll;
        std::cout << "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            std::cin >> marks[i];
        }
    }

    float getAverage() {
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum / 3;
    }

    void display() {
        std::cout << "Name: " << name << "\nRoll: " << roll;
        std::cout << "\nAverage Marks: " << getAverage() << "\n";
    }
};

int main() {
    int n;
    std::cout << "Enter number of students: ";
    std::cin >> n;
    std::vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        std::cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].input();
    }

    std::cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
        std::cout << "-----------------------\n";
    }

    return 0;
}
