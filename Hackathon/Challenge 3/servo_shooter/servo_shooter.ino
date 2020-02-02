#include <Servo.h>

Servo myservo; // 建立Servo物件，控制伺服馬達

void setup()
{
  myservo.attach(9); // 連接數位腳位9，伺服馬達的訊號線
}

void loop()
{
  myservo.write(180);
  delay(100);//delay()必須加！！
  for(int i = 180; i >= 0; i-=1){
    myservo.write(i);// 使用write，傳入角度，從180度轉到0度
    delay(30);
  }
  delay(100);
}    
