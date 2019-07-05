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


