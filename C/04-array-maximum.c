#include <stdio.h>

int main(void) {
    int n;
    int values[100];
    int maximum;
    int N_max = -(__INT_MAX__);

    printf("How many integers (1-100)? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid count.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    for (int i = 1; i < n; i++) {
        if (values[i] < 0)
        {
            
            if(values[i] > N_max)
            {
                N_max = values[i];
            }
            maximum = N_max;

        }
        else{
            if (values[i] > maximum) {
            maximum = values[i];
        }
    
        }
        
        
    }

    printf("Maximum = %d\n", maximum);
    return 0;
}
