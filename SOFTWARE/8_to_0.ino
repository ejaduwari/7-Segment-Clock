#define AB_DF 22
#define AB_STROBE 23

void a_out(int);
void b_out(int);
void c_out(int);
void d_out(int);

void setup() {
  //A
  pinMode(18, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(19, OUTPUT);
  //B
  pinMode(4, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(0, OUTPUT);
  //C
  pinMode(33, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(25, OUTPUT);
  //D
  pinMode(27, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(26, OUTPUT);

  pinMode(AB_DF, OUTPUT);
  pinMode(AB_STROBE, OUTPUT);
  pinMode(15, OUTPUT);

  digitalWrite(AB_DF, HIGH);
  digitalWrite(AB_STROBE, HIGH);
  digitalWrite(15, LOW);
}

void loop() {
  for(int i=8; i>=0; i--){
    a_out(i);
    b_out(i);
    c_out(i);
    d_out(i); 
    delay(1000);
  }
}



void a_out(int num){
  //BCD case by case values
  switch(num){
    case 1:
      //1
      digitalWrite(18, LOW);
      digitalWrite(21, LOW);
      digitalWrite(5, LOW);
      digitalWrite(19, HIGH);
      break;

    case 2:
      //2
      digitalWrite(18, LOW);
      digitalWrite(21, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(19, LOW);
      break;

    case 3:
      //3
      digitalWrite(18, LOW);
      digitalWrite(21, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(19, HIGH);
      break;

    case 4:
      //4
      digitalWrite(18, LOW);
      digitalWrite(21, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(19, LOW);
      break;

    case 5:
      //5
      digitalWrite(18, LOW);
      digitalWrite(21, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(19, HIGH);
      break;

    case 6:
      //6
      digitalWrite(18, LOW);
      digitalWrite(21, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(19, LOW);
      break;

     case 7:
      //7
      digitalWrite(18, LOW);
      digitalWrite(21, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(19, HIGH);
      break;

     case 8:
      //8
      digitalWrite(18, HIGH);
      digitalWrite(21, LOW);
      digitalWrite(5, LOW);
      digitalWrite(19, LOW);
      break;

    default:
      //0
      digitalWrite(18, LOW);
      digitalWrite(21, LOW);
      digitalWrite(5, LOW);
      digitalWrite(19, LOW);
      break;
    }
}

void b_out(int num){
  switch(num){
    case 1:
      digitalWrite(4, LOW);
      digitalWrite(17, LOW);
      digitalWrite(16, LOW);
      digitalWrite(0, HIGH);
      break;

    case 2:
      digitalWrite(4, LOW);
      digitalWrite(17, LOW);
      digitalWrite(16, HIGH);
      digitalWrite(0, LOW);
      break;

    case 3:
      digitalWrite(4, LOW);
      digitalWrite(17, LOW);
      digitalWrite(16, HIGH);
      digitalWrite(0, HIGH);
      break;

    case 4:
      digitalWrite(4, LOW);
      digitalWrite(17, HIGH);
      digitalWrite(16, LOW);
      digitalWrite(0, LOW);
      break;

    case 5:
      digitalWrite(4, LOW);
      digitalWrite(17, HIGH);
      digitalWrite(16, LOW);
      digitalWrite(0, HIGH);
      break;

    case 6:
      digitalWrite(4, LOW);
      digitalWrite(17, HIGH);
      digitalWrite(16, HIGH);
      digitalWrite(0, LOW);
      break;

     case 7:
      digitalWrite(4, LOW);
      digitalWrite(17, HIGH);
      digitalWrite(16, HIGH);
      digitalWrite(0, HIGH);
      break;

     case 8:
      digitalWrite(4, HIGH);
      digitalWrite(17, LOW);
      digitalWrite(16, LOW);
      digitalWrite(0, LOW);
      break;

    default:
      digitalWrite(4, LOW);
      digitalWrite(17, LOW);
      digitalWrite(16, LOW);
      digitalWrite(0, LOW);
      break;
    }
}

void c_out(int num){
  switch(num){
    case 1:
      digitalWrite(33, LOW);
      digitalWrite(2, LOW);
      digitalWrite(32, LOW);
      digitalWrite(25, HIGH);
      break;

    case 2:
      digitalWrite(33, LOW);
      digitalWrite(2, LOW);
      digitalWrite(32, HIGH);
      digitalWrite(25, LOW);
      break;

    case 3:
      digitalWrite(33, LOW);
      digitalWrite(2, LOW);
      digitalWrite(32, HIGH);
      digitalWrite(25, HIGH);
      break;

    case 4:
      digitalWrite(33, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(32, LOW);
      digitalWrite(25, LOW);
      break;

    case 5:
      digitalWrite(33, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(32, LOW);
      digitalWrite(25, HIGH);
      break;

    case 6:
      digitalWrite(33, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(25, LOW);
      break;

     case 7:
      digitalWrite(33, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(25, HIGH);
      break;

     case 8:
      digitalWrite(33, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(32, LOW);
      digitalWrite(25, LOW);
      break;

    default:
      digitalWrite(33, LOW);
      digitalWrite(2, LOW);
      digitalWrite(32, LOW);
      digitalWrite(25, LOW);
      break;
    }
}

void d_out(int num){
  switch(num){
    case 1:
      digitalWrite(27, LOW);
      digitalWrite(14, LOW);
      digitalWrite(12, LOW);
      digitalWrite(26, HIGH);
      break;

    case 2:
      digitalWrite(27, LOW);
      digitalWrite(14, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(26, LOW);
      break;

    case 3:
      digitalWrite(27, LOW);
      digitalWrite(14, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(26, HIGH);
      break;

    case 4:
      digitalWrite(27, LOW);
      digitalWrite(14, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(26, LOW);
      break;

    case 5:
      digitalWrite(27, LOW);
      digitalWrite(14, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(26, HIGH);
      break;

    case 6:
      digitalWrite(27, LOW);
      digitalWrite(14, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(26, LOW);
      break;

     case 7:
      digitalWrite(27, LOW);
      digitalWrite(14, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(26, HIGH);
      break;

     case 8:
      digitalWrite(27, HIGH);
      digitalWrite(14, LOW);
      digitalWrite(12, LOW);
      digitalWrite(26, LOW);
      break;

    default:
      digitalWrite(27, LOW);
      digitalWrite(14, LOW);
      digitalWrite(12, LOW);
      digitalWrite(26, LOW);
      break;
    }
}
