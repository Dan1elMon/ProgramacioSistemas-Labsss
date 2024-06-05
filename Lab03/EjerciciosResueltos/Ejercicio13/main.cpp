#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() {
    srand(time(NULL));

    const int maxGrade = 20;

    for (int student = 1; student <= 3; student++) {
        cout << "Estudiante " << student << ":" << endl;
        for (int grade = 1; grade <= 5; grade++) {
        int randomGrade = rand() % (maxGrade + 1);
        cout << "Nota " << grade << ": " << randomGrade << endl;
    }
    cout << "\n"; 
    }

    return 0;
}
