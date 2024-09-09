#define LED 11

void setup() {
  pinMode(LED, OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readString(); 
    TransmitMorse(input); 
  }
}
void LIGHT(String morseCode) {
  for (int i = 0; i <= 5 ; i++) { // max 5 length of morse code for letter and numbers
    if (morseCode[i] == '.') {
      digitalWrite(LED, HIGH); 
      delay(300); 
    } else if (morseCode[i] == '-') {
      digitalWrite(LED, HIGH); 
      delay(900); // (3*300ms)
    }
    digitalWrite(LED, LOW); 
    delay(300); 
  }
}

void TransmitMorse(String USERINPUT) {
  for (int i = 0; i < USERINPUT.length(); i++) {
    switch (toupper(USERINPUT[i])) { // convert lower case letter to upper case
      case 'A':
        LIGHT(".-");
        break;
      case 'B':
        LIGHT("-...");
        break;
      case 'C':
        LIGHT("-.-.");
        break;
      case 'D':
        LIGHT("-..");
        break;
      case 'E':
        LIGHT(".");
        break;
      case 'F':
        LIGHT("..-.");
        break;
      case 'G':
        LIGHT("--.");
        break;
      case 'H':
        LIGHT("....");
        break;
      case 'I':
        LIGHT("..");
        break;
      case 'J':
        LIGHT(".---");
        break;
      case 'K':
        LIGHT("-.-");
        break;
      case 'L':
        LIGHT(".-..");
        break;
      case 'M':
        LIGHT("--");
        break;
      case 'N':
        LIGHT("-.");
        break;
      case 'O':
        LIGHT("---");
        break;
      case 'P':
        LIGHT(".--.");
        break;
      case 'Q':
        LIGHT("--.-");
        break;
      case 'R':
        LIGHT(".-.");
        break;
      case 'S':
        LIGHT("...");
        break;
      case 'T':
        LIGHT("-");
        break;
      case 'U':
        LIGHT("..-");
        break;
      case 'V':
        LIGHT("...-");
        break;
      case 'W':
        LIGHT(".--");
        break;
      case 'X':
        LIGHT("-..-");
        break;
      case 'Y':
        LIGHT("-.--");
        break;
      case 'Z':
        LIGHT("--..");
        break;
      case '0':
        LIGHT("-----");
        break;
      case '1':
        LIGHT(".----");
        break;
      case '2':
        LIGHT("..---");
        break;
      case '3':
        LIGHT("...--");
        break;
      case '4':
        LIGHT("....-");
        break;
      case '5':
        LIGHT(".....");
        break;
      case '6':
        LIGHT("-....");
        break;
      case '7':
        LIGHT("--...");
        break;
      case '8':
        LIGHT("---..");
        break;
      case '9':
        LIGHT("----.");
        break;
      default:
        break; 
    }
    delay(300); 
  }
}
