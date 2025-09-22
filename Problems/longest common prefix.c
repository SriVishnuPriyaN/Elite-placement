char* longestCommonPrefix(char** strs, int strsSize) {
    char *str = malloc(1000 * sizeof(char));
    int j = 0, k = 0;

    while (strs[0][j] != '\0') {
        char ch = strs[0][j];
        for (int i = 1; i < strsSize; i++) {
            if (strs[i][j] == '\0' || strs[i][j] != ch) {  
                str[k] = '\0';
                return str;
            }
        }
        str[k++] = ch;
        j++;
    }
    str[k] = '\0';  
    return str;
}
