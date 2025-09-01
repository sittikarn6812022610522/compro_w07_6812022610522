/*
#include<stdio.h>

int main(){
    int level;
    printf("Enter your level (1-4): ");
    scanf("%d", &level);

    switch (level) {
        case 1: printf("Beginner\n");
        case 2: printf("Intermediate\n");
        case 3: printf("Advanced\n"); break;
        case 4: printf("Expert\n"); break;
        default: printf("Invalid level\n");

    
    }

    return 0;
}

/*
- 1 : Beginner Intermediate Advanced
- 2 : Intermediate Advanced
- 3 : Advanced
- 4 : Expert
- ค่าอื่นนอกเหนือจาก (1 - 4) : Invalid level
- เมื่อไม่ใส่ break; ใน case 1,2 โปรเเกรมจะทำงานต่อเนื่องจนเจอ Case ที่มี break; หรือจนกว่าจะจบ switch

*/


#include <stdio.h>

int main() {

    int level;

    printf( "Enter level: " );

    scanf( "%d", & level );

    if (level <= 0) { printf("The level below 1 is not allowed\n"); } 

    else if (level > 4) { printf("The level above 4 is not allowed\n"); } 

    else {  switch (level) {

            case 1:
                printf("Beginner\n");
                break;
            case 2:
                printf("Intermediate\n");
                break;
            case 3:
                printf("Advanced\n");
                break;
            case 4:
                printf("Expert\n");
                break;
        }
    }

    return 0;
}


/*  

- 1 : Beginner
- 2 : Intermediate
- 3 : Advanced
- 4 : Expert
- ค่าที่น้อยกว่า 1 : The level below 1 is not allowed
- ค่าที่มากกว่า 4 : The level above 4 is not allowed

*/