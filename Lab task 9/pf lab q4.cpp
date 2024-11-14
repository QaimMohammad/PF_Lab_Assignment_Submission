#include <stdio.h>
#include <string.h>

int main() {
    
    char students[5][20] = {"Alice", "Harry", "Charlie", "Diana", "Eve"};
    
    char name[20];
  
    printf("Enter a name: ");
    scanf("%s", name);
    
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(name, students[i]) == 0) {
            found = 1;
            break;
        }
    }
    
   
    if (found) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}

