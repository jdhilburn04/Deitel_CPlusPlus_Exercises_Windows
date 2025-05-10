#include <iostream>
#include <stdio.h>

int main() {

    // int studentGrade{};
    // std::cout << "Please enter a student grade (1-99): ";
    // std::cin >> studentGrade;

    // if-else
    // if (studentGrade < 70) {
    //     std::cout << "Failed";
    // } else {
    //     std::cout << "Passed";
    // }

    // // swtich
    // switch (studentGrade / 10) {
    //     case 10:
    //         std::cout << "Please enter a grade less than 100\n";
    //         break;
    //     case 7:
    //         std::cout << "Nice job \n";
    //         std::cout << "Letter Grade: 'C'\n";
    //         break;
    //     case 8:
    //         std::cout << "Good job \n";
    //         std::cout << "Letter Grade: 'B'\n";
    //         break;
    //     case 9:
    //         std::cout << "Great job \n";
    //         std::cout << "Letter Grade: 'A'\n";
    //         break;
    //     default:
    //         std::cout << "Failed\n";
    //         std::cout << "Please take the course again\n";
    // }
    //
    // // While loop - Grade Counter
    // int currentGrade{};
    // int totalGrade{};
    // int count{};
    //
    // while (count < 5) {
    //     std::cout << "Please enter a student grade (1-99): \n";
    //     std::cin >> currentGrade;
    //     totalGrade += currentGrade;
    //     count++;
    // }
    //
    // int average = totalGrade / count;
    // std::cout << "Average grade: " << average << "\n";
    //
    // switch (totalGrade / 10) {
    //     case 10:
    //         std::cout << "Please enter a grade less than 100\n";
    //         break;
    //     case 9:
    //         std::cout << "Wow the class average was an A!\n";
    //         break;
    //     case 8:
    //         std::cout << "Not bad, class average was a B!\n";
    //         break;
    //     case 7:
    //         std::cout << "Well, not great but the average was a C\n";
    //         break;
    //     default:
    //         std::cout << "Yikes! The average was an F.\n";
    //         std::cout << "Please study next time\n";
    // }


    // Sentinel-Controlled Iteration
    // Task: Develop a reps-average program that processes reps at an arbitrary number of reps each time it runs

    int reps{};
    int totalReps{};
    int set{1};

    std::cout << "Enter the number of reps for set " << set << " or -1 to quit\n";
    std::cin >> reps;

    while (reps != -1) {
        if (reps < -1) {
            std::cout << "Invalid input\n";
            std::cout << "Please enter a positive number or -1 to quit\n";
            std::cin >> reps;
            continue;
        }
        totalReps += reps;
        set++;

        std::cout << "You entered " << reps << " reps for set " << (set -1) << "\n";
        std::cout << "Enter the number of reps for set " << set << " or -1 to quit\n";
        std::cin >> reps;
    }

    double averageReps {static_cast<double>(totalReps) / (set - 1)};
    std::cout << "You entered reps for " << (set - 1) << " sets\n";
    std::cout << "Average reps per set: " << averageReps << "\n";



    return 0;
}