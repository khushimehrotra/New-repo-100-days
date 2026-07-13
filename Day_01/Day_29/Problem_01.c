#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char* s) {
    int len = strlen(s);
    
    // Allocate space for the stack (at most len characters)
    char *stack = (char *)malloc(len * sizeof(char));
    if (stack == NULL) return false; // allocation failed
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        char current = s[i];
        
        // If it's an opening bracket, push it onto the stack
        if (current == '(' || current == '{' || current == '[') {
            stack[++top] = current;
        } 
        // If it's a closing bracket
        else {
            // Stack is empty means there is no matching opening bracket
            if (top == -1) return false;
            
            // Check if the top of the stack matches the closing bracket
            if (current == ')' && stack[top] != '(') return false;
            if (current == '}' && stack[top] != '{') return false;
            if (current == ']' && stack[top] != '[') return false;
            
            // Pop the element if it matches
            top--;
        }
    }
    
    // If top is -1, all brackets were matched successfully
    bool result = (top == -1);
    free(stack);
    return result;
}
