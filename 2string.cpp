#include <bits/stdc++.h> 
bool isAlphanumeric(char ch){
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}
char toLowerCase(char ch){
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        return ch - 'A' + 'a'; 
    }
}


bool checkPalindrome(string s){  
    string filteredstr;
    
    for (char str : s) {
        if (isAlphanumeric(str)) {
            filteredstr += toLowerCase(str);
        }
    }
    
    int start = 0, end = filteredstr.length() - 1;
    while (start <= end) {
        if (filteredstr[start] != filteredstr[end]) {
            return false;
        }
        start++;
        end--;
    }
    
    return true;
}