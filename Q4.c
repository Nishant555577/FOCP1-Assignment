#include <stdio.h>
void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_arithmetic(int *a, int *b) {
    if (*a == *b) return; 
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void swap_xor(int *a, int *b) {
    if (*a == *b) return; 
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void swap_pointers(int **a_ptr, int **b_ptr) {
    int *temp_ptr = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = temp_ptr;
}

int main() {
    int num1, num2;
    num1 = 10;
    num2 = 20;
    printf("--- Method 1: Temporary Variable ---\n");
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap_temp(&num1, &num2);
    printf("After swap: num1 = %d, num2 = %d\n\n", num1, num2);

    num1 = 30;
    num2 = 40;
    printf("--- Method 2: Arithmetic Operations ---\n");
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap_arithmetic(&num1, &num2);
    printf("After swap: num1 = %d, num2 = %d\n\n", num1, num2);

   
    num1 = 50;
    num2 = 60;
    printf("--- Method 3: Bitwise XOR ---\n");
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap_xor(&num1, &num2);
    printf("After swap: num1 = %d, num2 = %d\n\n", num1, num2);

   
    int val1 = 70;
    int val2 = 80;
    int *ptr1 = &val1;
    int *ptr2 = &val2;
    printf("--- Method 4: Pointer Manipulation (swapping pointers) ---\n");
    printf("Before swap: *ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);
    swap_pointers(&ptr1, &ptr2);
    printf("After swap: *ptr1 = %d, *ptr2 = %d\n\n", *ptr1, *ptr2);

    return 0;
}

