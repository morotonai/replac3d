// For arduino uno and TMC2209 stepper motor driver
// This is my initial test to make it spin

#define EN_PIN           2      // Enable - PURPLE
#define DIR_PIN1          3      // Direction - WHITE
#define STEP_PIN1         4      // Step - ORANGE
#define DIR_PIN2         5
#define STEP_PIN2          6      // Software Slave Clock (SCK) - GREEN

int target1;
int target2;
int delay1;
int delay2;
bool dir = false;
bool codeExecuted = false;

//== Setup ===============================================================================

void setup() {
  pinMode(EN_PIN, OUTPUT);           // Set pinmodes
  pinMode(STEP_PIN1, OUTPUT);
  pinMode(DIR_PIN1, OUTPUT);
  pinMode(STEP_PIN2, OUTPUT);
  pinMode(DIR_PIN2, OUTPUT);
  digitalWrite(EN_PIN, HIGH);       
}

//== Loop =================================================================================

void loop() {

  if (!codeExecuted){
      target1 = 1600;
      target2 = 3200;
      delay1 = 2500;
      delay2 = 300;
  digitalWrite(DIR_PIN1, LOW);
    for (int i = 0; i <= target1; i++){     
      digitalWrite(EN_PIN, LOW);      didn       
    digitalWrite(STEP_PIN1, HIGH);
    delayMicroseconds(delay1);
    
    digitalWrite(STEP_PIN1, LOW);
        delayMicroseconds(delay1);

    //delay(2000);
  }
      digitalWrite(DIR_PIN2, LOW);
    for (int i = 0; i <= target2; i++){     
      digitalWrite(EN_PIN, LOW);             
    digitalWrite(STEP_PIN2, HIGH);
    delayMicroseconds(delay2);
    
    digitalWrite(STEP_PIN2, LOW);
        delayMicroseconds(delay2);

    //delay(2000);
  }
      digitalWrite(DIR_PIN2, HIGH);
    for (int i = 0; i <= target2; i++){     
      digitalWrite(EN_PIN, LOW);             
    digitalWrite(STEP_PIN2, HIGH);
    delayMicroseconds(delay2);
    
    digitalWrite(STEP_PIN2, LOW);
        delayMicroseconds(delay2);

    //delay(2000);
  }
  digitalWrite(DIR_PIN1, HIGH);

     for (int i = 0; i <= 2*target1; i++){
           
      digitalWrite(EN_PIN, LOW);             
    digitalWrite(STEP_PIN1, HIGH);
    delayMicroseconds(delay1);
    
    digitalWrite(STEP_PIN1, LOW);
        delayMicroseconds(delay1);

    //delay(2000);
  }
      digitalWrite(DIR_PIN2, LOW);
    for (int i = 0; i <= target2; i++){     
      digitalWrite(EN_PIN, LOW);             
    digitalWrite(STEP_PIN2, HIGH);
    delayMicroseconds(delay2);
    
    digitalWrite(STEP_PIN2, LOW);
        delayMicroseconds(delay2);

    //delay(2000);
  }
      digitalWrite(DIR_PIN2, HIGH);
    for (int i = 0; i <= target2; i++){     
      digitalWrite(EN_PIN, LOW);             
    digitalWrite(STEP_PIN2, HIGH);
    delayMicroseconds(delay2);
    
    digitalWrite(STEP_PIN2, LOW);
        delayMicroseconds(delay2);

    //delay(2000);
  }
    digitalWrite(DIR_PIN1, LOW);
    for (int i = 0; i <= target1; i++){     
      digitalWrite(EN_PIN, LOW);             
    digitalWrite(STEP_PIN1, HIGH);
    delayMicroseconds(delay1);
    
    digitalWrite(STEP_PIN1, LOW);
        delayMicroseconds(delay1);

    //delay(2000);
  }
    digitalWrite(DIR_PIN2, LOW);
    for (int i = 0; i <= target2; i++){     
      digitalWrite(EN_PIN, LOW);             
    digitalWrite(STEP_PIN2, HIGH);
    delayMicroseconds(delay2);
    
    digitalWrite(STEP_PIN2, LOW);
    delayMicroseconds(delay2);

    //delay(2000);
  }

    digitalWrite(DIR_PIN2, HIGH);
    for (int i = 0; i <= target2; i++){     
      digitalWrite(EN_PIN, LOW);             
    digitalWrite(STEP_PIN2, HIGH);
    delayMicroseconds(delay2);
    
    digitalWrite(STEP_PIN2, LOW);
    delayMicroseconds(delay2);

    //delay(2000);
  }  
  }
  codeExecuted = true;
}
