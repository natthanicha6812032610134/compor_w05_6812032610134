#include <stdio.h>



int main() {// ประกาศตัวแปร
    char name = 'M';       // ตัวอักษรตัวแรกของชื่อ (พิมพ์ใหญ่)
    int age = 18;          // อายุของตัวเอง
    float weight = 54.5;   // น้ำหนักของตัวเอง

// แสดงผลลัพธ์ออกหน้าจอ
    printf("Student %c is %d years old.\n", name, age);
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}