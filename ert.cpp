#include <iostream>

int main() {
    float a1, a2, a3;
    int positiveCount = 0, negativeCount = 0;
    float sum = 0.0, average;

    // ��?��� ����� �� ����?
    std::cout << "Enter three numbers:" << std::endl;
    std::cin >> a1 >> a2 >> a3;

    // ����? a1
    if (a1 > 0) {
        positiveCount++;
    }
    else if (a1 < 0) {
        negativeCount++;
    }

    // ����? a2
    if (a2 > 0) {
        positiveCount++;
    }
    else if (a2 < 0) {
        negativeCount++;
    }

    // ����? a3
    if (a3 > 0) {
        positiveCount++;
    }
    else if (a3 < 0) {
        negativeCount++;
    }

    // ������ ��� � �?��?�
    sum = a1 + a2 + a3;
    average = sum / 3;

    // �ǁ ����� ����� ����
    std::cout << "Number of positive numbers: " << positiveCount << std::endl;

    // �ǁ ����� ����� ���?
    std::cout << "Number of negative numbers: " << negativeCount << std::endl;

    // �ǁ �?��?�
    std::cout << "Average: " << average << std::endl;

    return 0;
}
