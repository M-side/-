#ifndef ____MorseCode__
#define ____MorseCode__
class MorseCode
{
private:
    int _codePin;
public:
    MorseCode(int _pin);
    void dot();
    void dash();
    void transfor(char _code);
};

#endif /* defined(____MorseCode__) */


MorseCode::MorseCode(int _pin)
{
    pinMode(_pin, OUTPUT);
    _codePin = _pin;
}
void MorseCode::dot()
{
    digitalWrite(_codePin, HIGH);
    delay(250);
    digitalWrite(_codePin, LOW);
    delay(250);
}
void MorseCode::dash()
{
    digitalWrite(_codePin, HIGH);
    delay(1000);
    digitalWrite(_codePin, LOW);
    delay(250);
}
void MorseCode::transfor(char _code)
{
    switch (_code) {
        case 'A':
        case 'a':
            dot();
            dash();
            break;
        case 'B':
        case 'b':
            dash();
            dot();
            dot();
            dot();
            break;
        case 'C':
        case 'c':
          dash();
          dot();
          dash();
          dot();
          break;
      case 'D':
      case 'd':
        dash();
        dot();
        dot();
        break;
      case 'E':
      case 'e':
        dot();
        break;
      case 'F':
      case 'f':
        dot();
        dot();
        dash();
        dot();
        break;
      case 'G':
      case 'g':
        dash();
        dash();
        dot();
        break;
      case 'H':
      case 'h':
        dot();
        dot();
        dot();
        dot();
        break;
      case 'I':
      case 'i':
        dot();
        dot();
        break;
      case 'J':
      case 'j':
        dot();
        dash();
        dash();
        dash();
        break;
      case 'K':
      case 'k':
        dash();
        dot();
        dash();
        break;
      case 'L':
      case 'l':
        dot();
        dash();
        dot();
        dot();
        break;
      case 'M':
      case 'm':
        dash();
        dash();
        break;
      case 'N':
      case 'n':
        dash();
        dot();
        break;
      case 'O':
      case 'o':
        dash();
        dash();
        dash();
        break;
      case 'P':
      case 'p':
        dot();
        dash();
        dash();
        dot();
        break;
      case 'Q':
      case 'q':
        dash();
        dash();
        dot();
        dash();
        break;
      case 'R':
      case 'r':
        dot();
        dash();
        dot();
        break;
        case 'S':
        case 's':
            dot();
            dot();
            dot();
            break;
        case 'T':
        case 't':
          dash();
          break;
        case 'U':
        case 'u':
          dot();
          dot();
          dash();
          break;
        case 'V':
        case 'v':
          dot();
          dot();
          dot();
          dash();
          break;
        case 'W':
        case 'w':
          dot();
          dash();
          dash();
          break;
        case 'X':
        case 'x':
          dash();
          dot();
          dot();
          dash();
          break;
        case 'Y':
        case 'y':
          dash();
          dot();
          dash();
          dash();
          break;
        case 'Z':
        case 'z':
          dash();
          dash();
          dot();
          dot();
          break;
        default:
            break;
    }
}
int incomingByte = 0;
MorseCode Morse(13);
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()>0){
    incomingByte = Serial.read();
    Morse.transfor(incomingByte);
    
  }

}
