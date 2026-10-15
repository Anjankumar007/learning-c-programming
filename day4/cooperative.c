#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char village[50];
    int pincode;
} Address;

typedef struct {
    int memid;
    char name[50];
    float share;
    Address address;
} member;

int main() {
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("invalid input");
        return 0;
    }
    
    member arr[n];
    int max = 0;
    float total = 0.0f;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i].memid);
        scanf("%s", arr[i].name);
        scanf("%f", &arr[i].share);
        scanf("%s", arr[i].address.village);
        scanf("%d", &arr[i].address.pincode);
        total = total + arr[i].share;

        if (arr[i].share > arr[max].share) {
            max = i;
        }
    }

    for (int i = 0; i < n; i++) {
        printf(" member id :%d\n", arr[i].memid);
        printf("member name :%s\n", arr[i].name);
        printf("member share holding :%f\n", arr[i].share);
        printf("member's village : %s\n", arr[i].address.village);
        printf("member's pincode: %d\n", arr[i].address.pincode);
    }

    printf("the highest share holding %f", arr[max].share);

    printf("the higest share holder%s and id : %d",arr[max].name,arr[max].memid);

    return 0;
}