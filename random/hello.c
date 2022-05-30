#include <stdio.h>

int main() {
	int n;
    printf("Enter teh size");
    scanf("%d", &n);
	int arr[n];
    printf("Enter teh elements");

    for(int i=0;i<n;i++){
	    scanf("%d", &arr[i]);
	}
	int rev[n];
	for(int i=n-1;i>=0;i--){
	    rev[n-1-i] = arr[i]; 
	}
	for(int i=0;i<n;i++){
	    printf("%d ", rev[i]);
	}
	return 0;
}