#include <stdio.h>

int main() {
    float score, bonus; // ใช้ float เพื่อรองรับคะแนนที่เป็นทศนิยม

    printf("กรอกคะแนนสอบ Midterm: "); // แจ้งผู้ใช้กรอกคะแนน

    scanf("%f", &score); // input คะแนนสอบผู้ใช้

    if (score > 50) { bonus = score * 0.05 ; score += bonus; } // ถ้าคะเเนนมากกว่า 50 ให้เพิ่มโบนัส 5% โดยการคูณ 0.05 เเล้วเเสดงคะเเนนรวม

    else{score = score;} // ถ้าคะแนนไม่เกิน 50 ให้คะเเนนเท่าเดิม

    printf("คะแนนรวมหลังคำนวณ: %.2f\n", score); // %.2f แสดงทศนิยม 2 ตำแหน่ง

    printf("End of evaluation\n"); // เเสดงเป็นการจบโปรเเกรม

    return 0; // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ
}