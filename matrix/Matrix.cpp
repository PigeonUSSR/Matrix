/***********************************
* Автор: Прохоров В.В.             *
* Дата: 20.10.2026                 *
* Название: Обработка массивов     *
* Вариант: 22                      *
***********************************/

#include <iostream>

using namespace std;

int main() {
    const int maxSize = 5;
    int comboStreak, bestComboStreak, bestLine;
    int squareMatrix[maxSize][maxSize];
    comboStreak = 0;
    bestLine = 1;
    bestComboStreak = 0;

    cout << "Enter square matrix:";
    for (int lineIndex = 0; lineIndex < maxSize; ++lineIndex) {
        for (int columnIndex = 0; columnIndex < maxSize; ++columnIndex) {
            cin >> squareMatrix[lineIndex][columnIndex];
        }
    }
    for (int lineIndex = 0; lineIndex < maxSize; ++lineIndex) {
        for (int columnIndex = 1; columnIndex < maxSize; ++columnIndex) {
            if (squareMatrix[lineIndex][columnIndex] = squareMatrix[lineIndex][columnIndex - 1]) {
                ++comboStreak;
                if (comboStreak > bestComboStreak) {
                    bestComboStreak = comboStreak;
                    bestLine = lineIndex;
                }
            }
            else {
                comboStreak = 0;
            }
            
        }
    }
    cout << "Best line;" << endl;
    for (int columnIndex = 0; columnIndex < maxSize; ++columnIndex) {
        cout << squareMatrix[bestLine][columnIndex] << " ";
    }
}
