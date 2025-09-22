/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *num = malloc((digitsSize + 1) * sizeof(int));
    int carry = 1;
    int k = digitsSize;

    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        num[k] = sum % 10;
        carry = sum / 10;
        k--;
    }

    if (carry) {
        num[k] = carry;
        *returnSize = digitsSize + 1;
        return num;
    } else {
        *returnSize = digitsSize;
        return num + 1;
    }
}