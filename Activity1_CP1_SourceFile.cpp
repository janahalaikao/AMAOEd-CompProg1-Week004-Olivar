#include <iostream>

#include <iomanip>

#include <string>

 

using namespace std;

 

// Function to safely input a grade (must be > 50)

float inputGrade(const string &prompt) {

    float grade;

    do {

        cout << prompt;

        cin >> grade;

        if (grade <= 50) {

            cout << " Invalid input! Grade must be greater than 50.\n";

        }

    } while (grade <= 50);

    return grade;

}

 

int main() {

    string name;

    float P_Quiz1, P_Quiz2, M_Quiz1, M_Quiz2, F_Quiz1, F_Quiz2;

    float P_Act, M_Act, F_Act;

    float P_Exam, M_Exam, F_Exam;

 

    // Greet the user

    cout << "Welcome\n";

    cout << "--------------------------------------\n";

   

    // Input section

    cout << "Please enter your full name: ";

    getline(cin, name);

 

    cout << "\nHi " << name << "! Let's enter your grades.\n";

 

    // Quizzes

    cout << "\n--- Enter LMS Grade ---\n";

    P_Quiz1 = inputGrade("Prelim Quiz 1: ");

    P_Quiz2 = inputGrade("Prelim Quiz 2: ");

    M_Quiz1 = inputGrade("Midterm Quiz 1: ");

    M_Quiz2 = inputGrade("Midterm Quiz 2: ");

    F_Quiz1 = inputGrade("Final Quiz 1: ");

    F_Quiz2 = inputGrade("Final Quiz 2: ");

 

    // Activities

    cout << "\n--- Enter F2F Grade ---\n";

    P_Act = inputGrade("Prelim Activity: ");

    M_Act = inputGrade("Midterm Activity: ");

    F_Act = inputGrade("Finals Activity: ");

 

    // Major Exams

    cout << "\n--- Enter Major Exam Grade ---\n";

    P_Exam = inputGrade("Prelim Exam: ");

    M_Exam = inputGrade("Midterm Exam: ");

    F_Exam = inputGrade("Final Exam: ");

 

    // Calculate averages

    float TQuiz = (P_Quiz1 + P_Quiz2 + M_Quiz1 + M_Quiz2 + F_Quiz1 + F_Quiz2) / 6;

    float TMajor = (P_Exam + M_Exam + F_Exam) / 3;

    float TAct = (P_Act + M_Act + F_Act) / 3;

 

    // Calculate grades

    float LMSGrade = (TQuiz * 0.5f) + (TMajor * 0.5f);

    float F2FGrade = (TAct * 0.5f) + (TMajor * 0.5f);

    float TotalGrade = (LMSGrade * 0.5f) + (F2FGrade * 0.5f);

 

    // Display results

    cout << fixed << setprecision(2);

    cout << "\n\n===== Final Grade Report =====\n";

    cout << "Student Name: " << name << "\n";

    cout << "------------------------------\n";

    cout << "Quiz Average:        " << TQuiz << "\n";

    cout << "Major Exam Average:  " << TMajor << "\n";

    cout << "Activity Average:    " << TAct << "\n\n";

    cout << "LMS Grade:           " << LMSGrade << "\n";

    cout << "Face-to-Face Grade:  " << F2FGrade << "\n";

    cout << "------------------------------\n";

    cout << "FINAL GRADE:         " << TotalGrade << "\n";

 

    // Grade status

    cout << "Grade Status:        ";

    if (TotalGrade >= 75) {

        cout << "PASSED\n";

    } else {

        cout << "FAILED\n";

    }

 

    cout << "==============================\n";

    cout << "Thank you for using the grading system!\n";

 

    // Pause before exiting

    cout << "Press Enter to exit...";

    cin.ignore(); // Clear leftover newline

    cin.get();    // Wait for Enter

 

    return 0;

}
