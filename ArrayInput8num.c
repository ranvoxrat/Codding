/*Mark Feliciano
BSIT-IT 1B
Date:13/04/2021
Practice Activity #1
*/
#include <stdio.h>
#define max 8
int main(){
	int arr[max];
    int i;
    printf("Input eight (8) numbers: ");
    for (i = 0; i < max; i++){
        scanf("%d", &arr[i]);
        arr[i]*=arr[i];
    }
    printf("Squared value: ");
    for (i = 0; i < max ; i++){
        printf("%d ", arr[i]);
    } 
}
