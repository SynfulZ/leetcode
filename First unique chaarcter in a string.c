
int firstUniqChar(char *s) {
    // Initialize an array to store the frequency of each character
    int freq[26] = {0};
    
    // Count the frequency of each character in the string
    for (int i = 0; i < strlen(s); i++) {
        freq[s[i] - 'a']++;
    }
    
    // Iterate through the string to find the first non-repeating character
    for (int i = 0; i < strlen(s); i++) {
        if (freq[s[i] - 'a'] == 1) {
            return i; // Return the index of the first non-repeating character
        }
    }
    
    return -1; // If no non-repeating character found, return -1
}


