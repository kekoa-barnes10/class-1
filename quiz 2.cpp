#include <iostream>
#include <string>
using namespace std;

// Define the enum for grades
enum grade {
    A, B, C, D, F
};

// Define the function to read input for the student's score and return the grade
grade getGradeFromScore(int score[5]) {
    for (int i = 0; i < 5; i++)
    {
        if (score[i] >= 90)
            return A;
        else if (score[i] >= 80)
            return B;
        else if (score[i] >= 70)
            return C;
        else if (score[i] >= 60)
            return D;
        else
            return F;
    }
}


    char gradeToChar(grade g) {
        switch (g) {
        case A: return 'A';
        case B: return 'B';
        case C: return 'C';
        case D: return 'D';
        case F: return 'F';
        default: return ' ';
        }
    }
    float calculateAverage(int scores[5]) {
        float total = 0;
        float average = 0;
        for (int i = 0; i < 5; i++) {
            total += scores[i];

        }average = total / 5;
        return average;
    }
    void displayGrades(int scores[5]) {
        grade studentGrade;
        studentGrade = getGradeFromScore();
        for (int i = 0; i < 5; i++)
        {
            cout << scores[i]<<" "<< gradeToChar(studentGrade);
            
        }
    }  
int main() {
    grade studentGrade; 
    int scores[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> scores[ i ];
    }
    studentGrade = getGradeFromScore();
   
    cout << "Grade: " << gradeToChar(studentGrade) << endl; 
    float average = calculateAverage; cout << average << endl;

    return 0;
}
