
//define all motor pins
#define RIGHT_MOTOR 0
#define LEFT_MOTOR 0
#define UP_MOTOR 0
#define DOWN_MOTOR 0
#define FRONT_MOTOR 0
#define BACK_MOTOR 0

//function prototypes
void Right();
void RightInverse();
void DoubleRight();
void Left();
void DoubleLeft();
void LeftInverse();
void Up();
void DoubleUp();
void UpInverse();
void Down();
void DoubleDown();
void DownInverse();
void Front();
void DoubleFront();
void FrontInverse();
void Back();
void DoubleBack();
void BackInverse();

//define other global variables
int activeFunctions;

//setup anything that needs setting up
void setup() {
  // put your setup code here, to run once:
 Serial.Begin();
 Serial.Flush();
 activeFunctions = 0;  
}

//loop through all opcodes
void loop() {
  // put your main code here, to run repeatedly:
  switch (Serial.read()) {
    case 'RR':
      Right();
      break;
    case 'RI':
      RightInverse();
      break;
    case '2R':
      DoubleRight();
      break;
    case 'LL':
      Left();
      break;
    case 'LI':
      LeftInverse();
      break;
    case '2L':
      DoubleLeft();
      break;
    case 'UU':
      Up();
      break
      case 'UI':
      UpInverse();
      break;
      case '2U':
      DoubleUp();
      break;
      case 'DD':
      Down();
      break;
      case 'DI':
      DownInverse();
      break;
      case '2D':
      DoubleDown();
      break;
      case 'FF':
      Front();
      break;
      case 'FI':
      FrontInverse();
      break;
      case '2F':
      DoubleFront();
      break;
      case 'BB':
      Back();
      break;
      case 'BI':
      BackInverse();
      break;
      case '2B':
      DoubleBack();
      break;

  }

}


void Right(){
  
  }

void RightInverse(){
  
  }

void DoubleRight(){
  
  }

void Left(){
  
  }

void DoubleLeft(){
  
  }

void LeftInverse(){
  
  }

void Up(){
  
  }

void DoubleUp(){
  
  }

void UpInverse(){
  
  }

void Down(){
  
  }

void DoubleDown(){
  
  }

void DownInverse(){
  
  }

void Front(){
  
  }

void DoubleFront(){
  
  }

void FrontInverse(){
  
  }

void Back(){
  
  }

void DoubleBack(){
  
  }

void BackInverse(){
  
  }

