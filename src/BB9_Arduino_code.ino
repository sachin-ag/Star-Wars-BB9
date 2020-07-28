int motorPin1=7;
int motorPin2=8;
int motorSpeed1=10;
int motorSpeed2=9;
char a;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
//portOne.begin(9600);
pinMode(motorPin1,OUTPUT);
pinMode(motorPin2,OUTPUT);
pinMode(motorSpeed1,OUTPUT);
pinMode(motorSpeed2,OUTPUT);
}
void loop(){
  while(Serial.available()==0)
  {
    // stop();
    }
    if(Serial.available()>0){
      a=Serial.read();
    }
    switch(a){
      case '1':
        digitalWrite(motorPin2,HIGH);
        digitalWrite(motorPin1,LOW);
        digitalWrite(motorSpeed1,HIGH);
        digitalWrite(motorSpeed2,LOW);
        Serial.println(a);
        break;
        case '2':
        digitalWrite(motorPin2,LOW);
        digitalWrite(motorPin1,HIGH);
        digitalWrite(motorSpeed1,LOW);
        digitalWrite(motorSpeed2,HIGH);
        Serial.println(a);
        break;
        case '3':
      digitalWrite(motorPin2,HIGH);
        digitalWrite(motorPin1,LOW);
        digitalWrite(motorSpeed1,LOW);
        digitalWrite(motorSpeed2,HIGH);
        Serial.println(a);
        break;
        case  '4':
      digitalWrite(motorPin2,LOW);
        digitalWrite(motorPin1,HIGH);
        digitalWrite(motorSpeed1,HIGH);
        digitalWrite(motorSpeed2,LOW);
        Serial.println(a);
        break;
        case '0':
        digitalWrite(motorPin2,LOW);
        digitalWrite(motorPin1,LOW);
        digitalWrite(motorSpeed1,LOW);
        digitalWrite(motorSpeed2,LOW);
        break;
        }
}
