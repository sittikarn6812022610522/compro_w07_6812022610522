#include <stdio.h>

int main() {

    float x, y; // ประกาศตัวแปร x, y เป็น float เพื่อรองรับค่าทศนิยม

    printf("กรอกค่า x: "); // แจ้งผู้ใช้กรอกค่า x

    scanf("%f", &x); // รับค่า x

    printf("กรอกค่า y: "); // แจ้งผู้ใช้กรอกค่า y

    scanf("%f", &y);  // รับค่า y

    if (x > y) { printf("x มากกว่า y\n"); } // ถ้า x มากกว่า y
    
    else if (x < y) { printf("x น้อยกว่า y\n"); } // ถ้า x น้อยกว่า y

    else { printf("x เท่ากับ y\n"); } // ถ้า x เท่ากับ y

    return 0; //คืนค่า 0 หลังทำงานเสร็จ
}