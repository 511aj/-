
 
#include <Servo.h>
 
Servo mys;  // Servo 是定义，mys是舵机的名字
                                                                            // 很多开发板允许同时创建12个Servo对象
 
int pos = 0;    // 角度变量
 
void setup() {
  mys.attach(D4);  // 舵机在D4引脚 上
  Serial.begin(9600);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 2) { // 0度转到180度
    // 每一步增加1度
    mys.write(pos);              // 告诉伺服电机达到'pos'变量的角度
    
    delay(200);                       //等待时间
  }
  for (pos = 180; pos >= 0; pos -= 2) { // 180度转到0度
    mys.write(pos);              // 告诉伺服电机达到'pos'变量的角度
  
    delay(200);                       // 等待时间
  }
}