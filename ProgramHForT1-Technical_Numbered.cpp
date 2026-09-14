#include <iostream>
#include <string>

const double PASSING_GRADE = 75.0;

double calculateAverage(double score1, double score2, double score3) {
    return (score1 + score2 + score3)/ 3.0;
}  

void displayResult(const std::string& studentName, double averageGrade) {
    std::cout << "Student: " << studentName << std::endl;
    std::cout << "Average: " << averageGrade << std::endl;
    
    if (averageGrade >= PASSING_GRADE) {
        std::cout << "Result: PASSED" << std::endl;
    } else {
        std::cout << "Result: FAILED" << std::endl;
    }
}

int main() {
    std::string studentName;
    double score1;
    double score2;
    double score3;
    
    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName);

    std::cout << "Enter score 1: ";
    std::cin >> score1;

    std::cout << "Enter score 2: ";
    std::cin >> score2;

    std::cout << "Enter score 3: ";
    std::cin >> score3;

    double averageGrade =
        calculateAverage(score1, score2, score3);

    displayResult(studentName, averageGrade);
    
    return 0;
}