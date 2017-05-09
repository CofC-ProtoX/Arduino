
int pin1 = 3;
int pin2 = 6;
int pin3 = 9;
int pin4 = 11;

int pins[] = {pin1,pin2,pin3,pin4};

void setup() 
{ 
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  
  Serial.begin(9600);
} 
 
 
void loop() 
{ 
  for (int i=0; i < 4; i++) {
    Serial.print(i);
    analogWrite(pins[i],HIGH);
    delay(100);
    analogWrite(pins[i],LOW);
  }
} 

