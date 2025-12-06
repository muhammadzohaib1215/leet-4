#include <stdio.h>

int main() {
    int n;
    int tunnelHeight;
    int i,j;
    
    printf("Enter the value of box(n): ");
    scanf("%d", &n);

	printf("\nEnter the tunnel height : "); 
    scanf("%d", &tunnelHeight);

    int length, width, height;
    
    for(i=0;i<n;i++){
	
    printf("Enter the length ,width,height of box %d : ",i+1);
    scanf("%d %d %d", &length, &width, &height);

        if (height < tunnelHeight) {
            int volume = length * width * height;
            printf("%d\n", volume);
    }
 }

    return 0;
}

