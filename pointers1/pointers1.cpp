#include <iostream>

int* findSubarray(int* A, int sizeA, int* B, int sizeB) {
    for (int i = 0; i <= sizeA - sizeB; ++i) {
        bool isSubset = true;
        for (int j = 0; j < sizeB; ++j) {
            if (A[i + j] != B[j]) {
                isSubset = false;
                break;
            }
        }
        if (isSubset) {
            return &A[i];
        }
    }
    return nullptr;
}

int main() {
    int A[] = { 1, 2, 3, 4, 5, 6 };
    int B[] = { 3, 4, 5 };
    int* result = findSubarray(A, 6, B, 3);

    if (result != nullptr) {
        std::cout << "Found pos1 " << (result - A) << std::endl;
    }
    else {
        std::cout << "NO FOUND?!?!?" << std::endl;
    }

    return 0;
}
