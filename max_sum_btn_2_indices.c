#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max_sum_btn_2_indicies (int n, int arr[]) {
    int max = 0;
    int sum_i2j = 0; // i <= j
    int i = 0;
    int j = 0;
    int count_indicies = 0;
    for (i = 0; i < n; i++) {
        sum_i2j = 0;
        for (j = i; j < n; j++) {
            // printf("summing indices i=%d, j=%d\n", i,j);
            sum_i2j += arr[j];
            // printf("sum_i2j = %d\n", sum_i2j);
            if (sum_i2j > max) {
                max = sum_i2j;
                // printf("max = %d\n", max);
            }
            count_indicies++;
        } 
    }
    printf("(n=%d) # of index pairs = %d\n", n, count_indicies);
    return max;
}

int main(void)
{
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int result;

    result = max_sum_btn_2_indicies(1, arr);
    result = max_sum_btn_2_indicies(2, arr);
    result = max_sum_btn_2_indicies(3, arr);
    result = max_sum_btn_2_indicies(4, arr);
    result = max_sum_btn_2_indicies(5, arr);
    result = max_sum_btn_2_indicies(6, arr);
    result = max_sum_btn_2_indicies(7, arr);


    result = max_sum_btn_2_indicies(8, arr);
    printf("result = %d\n", result);
    return 0;
}