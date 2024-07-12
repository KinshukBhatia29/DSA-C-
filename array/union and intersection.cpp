#include <iostream>

// Function to perform union of two arrays
void unionArray(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    std::cout << "Union: ";
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            std::cout << arr1[i++] << " ";
        }
        else if (arr2[j] < arr1[i]) {
            std::cout << arr2[j++] << " ";
        }
        else {
            std::cout << arr1[i++] << " ";
            j++;
        }
    }

    while (i < size1) {
        std::cout << arr1[i++] << " ";
    }
    while (j < size2) {
        std::cout << arr2[j++] << " ";
    }

    std::cout << std::endl;
}

// Function to perform intersection of two arrays
void intersectionArray(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    std::cout << "Intersection: ";
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            j++;
        }
        else {
            std::cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
    std::cout << std::endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    unionArray(arr1, size1, arr2, size2);
    intersectionArray(arr1, size1, arr2, size2);

    return 0;
}
