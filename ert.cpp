#include <iostream>

int main() {
    float a1, a2, a3;
    int positiveCount = 0, negativeCount = 0;
    float sum = 0.0, average;

    // ÏÑ?ÇİÊ ÇÚÏÇÏ ÇÒ æÑæÏ?
    std::cout << "Enter three numbers:" << std::endl;
    std::cin >> a1 >> a2 >> a3;

    // ÈÑÑÓ? a1
    if (a1 > 0) {
        positiveCount++;
    }
    else if (a1 < 0) {
        negativeCount++;
    }

    // ÈÑÑÓ? a2
    if (a2 > 0) {
        positiveCount++;
    }
    else if (a2 < 0) {
        negativeCount++;
    }

    // ÈÑÑÓ? a3
    if (a3 > 0) {
        positiveCount++;
    }
    else if (a3 < 0) {
        negativeCount++;
    }

    // ãÍÇÓÈå ÌãÚ æ ã?Çä?ä
    sum = a1 + a2 + a3;
    average = sum / 3;

    // Ç ÊÚÏÇÏ ÇÚÏÇÏ ãËÈÊ
    std::cout << "Number of positive numbers: " << positiveCount << std::endl;

    // Ç ÊÚÏÇÏ ÇÚÏÇÏ ãäİ?
    std::cout << "Number of negative numbers: " << negativeCount << std::endl;

    // Ç ã?Çä?ä
    std::cout << "Average: " << average << std::endl;

    return 0;
}
