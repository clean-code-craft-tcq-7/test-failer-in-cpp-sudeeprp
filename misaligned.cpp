#include <iostream>
#include <assert.h>

int pair_number(int i, int j) {
    return i * 5 + j;
}

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << pair_number(i, j) << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n"; 
    int result = printColorMap();
    assert(result == 25);
    assert(pair_number(0, 0) == 1);
    assert(pair_number(0, 1) == 2);
    assert(pair_number(4, 4) == 25);
    std::cout << "All is well (maybe!)\n";
}