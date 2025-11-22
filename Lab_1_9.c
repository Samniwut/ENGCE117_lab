#include <stdio.h>

float totaCost1(float weight_kg); 
float totalCost2(float weight_kg);

int main() {
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;
    
    // รับค่ารหัสโซนและน้ำหนัก
    if (scanf("%d %f", &zoneCode, &weight_kg) != 2) {
        fprintf(stderr, "Input reading failed.\n");
        return 1; // Handle input failure
    }
    
    switch (zoneCode) {
    case 1:
        totalCost = totaCost1(weight_kg); // ส่ง float เข้าไป
        break;
        
    case 2:
        totalCost = totalCost2(weight_kg); // ส่ง float เข้าไป
        break;
        
    case 3 :
        totalCost = 500.0; // ใช้ 500.0 เพื่อให้สอดคล้องกับ totalCost ที่เป็น float
        break;
        
    default:
        printf("Invalid Zone Code\n");
        return 0; // ออกจาก main เมื่อ Zone Code ไม่ถูกต้อง
    }
    
    // แสดงผลลัพธ์เฉพาะเมื่อมีการคำนวณค่าขนส่งสำเร็จ
    printf("Total Cost: %.2f Baht\n", totalCost);
    
    return 0;
}

// ฟังก์ชันสำหรับ Zone 1 (Local) - ใช้ float เป็นพารามิเตอร์
float totaCost1(float weight_kg) {
    float cost;
    // ใช้ nested if-else ตามโจทย์
    if (weight_kg <= 5.0) {
        cost = 50.0;
    } else { // weight_kg > 5.0
        cost = 80.0;
    }
    return cost;
}

// ฟังก์ชันสำหรับ Zone 2 (Regional) - ใช้ float เป็นพารามิเตอร์
float totalCost2(float weight_kg) {
    float cost;
    // ใช้ nested if-else ตามโจทย์
    if (weight_kg <= 10.0) {
        cost = 150.0;
    } else { // weight_kg > 10.0
        cost = 250.0;
    }
    return cost;
}