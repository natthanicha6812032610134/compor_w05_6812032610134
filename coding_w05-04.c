#include <stdio.h>


int main() {

    // ข้อมูลผู้ใช้ 3 คน (ใส่ไว้ล่วงหน้า)
char name1[] = "mint";
int age1 = 18;
int height1 = 158;
float weight1 = 51.0;
char grade1 = 'C';


char name2[] = "fong";
int age2 = 19;
int height2 = 165;
float weight2 = 55.0;
char grade2 = 'A';


char name3[] = "jin";
int age3 = 18;
int height3 = 175;
float weight3 = 70.0;
char grade3 = 'B';


// แสดงผลข้อมูลเป็นตาราง
printf("\n-------------------------------------------------------------\n");
printf("| Name    | Age | Height(cm) | Weight(kg) |  Grade Point  |\n");
printf("-------------------------------------------------------------\n");
printf("| %-7s | %3d |   %8d |   %8.1f |      %8c |\n", name1, age1, height1, weight1, grade1);
printf("| %-7s | %3d |   %8d |   %8.1f |      %8c |\n", name2, age2, height2, weight2, grade2);
printf("| %-7s | %3d |   %8d |   %8.1f |      %8c |\n", name3, age3, height3, weight3, grade3);
printf("-------------------------------------------------------------\n");



return 0;
}