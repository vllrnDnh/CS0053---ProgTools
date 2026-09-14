#include <iostream>
#include <string>

namespace
{
constexpr double kPassingAverage = 75.0;
}

double calculateAverage(double firstScore, double secondScore, double thirdScore)
{
    return (firstScore + secondScore + thirdScore) / 3;
}

void displayResult(const std::string& studentName, double average)
{
    const char* result = average >= kPassingAverage ? "PASSED" : "FAILED";

    std::cout << "Student: " << studentName << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Result: " << result << std::endl;
}

int main()
{
    std::string studentName;
    double firstScore;
    double secondScore;
    double thirdScore;
    char processAnotherStudent = 'y';

    while (processAnotherStudent == 'y')
    {
        std::cout << "Enter student name: ";
        std::getline(std::cin, studentName);

        std::cout << "Enter score 1: ";
        std::cin >> firstScore;
        std::cout << "Enter score 2: ";
        std::cin >> secondScore;
        std::cout << "Enter score 3: ";
        std::cin >> thirdScore;

        const double average = calculateAverage(firstScore, secondScore, thirdScore);
        displayResult(studentName, average);

        std::cout << "Process another student? (y/n): ";
        std::cin >> processAnotherStudent;
        std::cin.ignore();
    }

    return 0;
}
