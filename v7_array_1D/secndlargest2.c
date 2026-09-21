 #include<stdio.h>
int main() {                               //important question.
    int n;
    printf("enter size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++) {
        printf("enter your number: ");
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int slargest=arr[0];
    for(int i=0;i<=n-1;i++) {
         if(largest<arr[i]) {   //this loop alone can work for increasing 
            slargest=largest;
            largest=arr[i];
         }
         else if(slargest<arr[i]&& largest!=arr[i]) {      //largest>arr[i]
            slargest=arr[i];
         }
         
    }
    printf("second largest value of your array is : %d",slargest);
    return 0;
    }
