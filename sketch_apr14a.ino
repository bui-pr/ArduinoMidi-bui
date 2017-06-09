#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE();

int val0 = 0;
int lastVal0 = 0;
int val1 = 0;
int lastVal1 = 0;
int val2 = 0;
int lastVal2 = 0;
int val3 = 0;
int lastVal3 = 0;
int val4 = 0;
int lastVal4 = 0;
int val5 = 0;
int lastVal5 = 0;
int val6 = 0;
int lastVal6 = 0;
int val7 = 0;
int lastVal7 = 0;

void setup()
{
    MIDI.begin(MIDI_CHANNEL_OMNI);
    MIDI.turnThruOff();

    for(int i = 0; i < 54; i++){
        pinMode(i, OUTPUT);
    }

    //調色端子。PWMで明るさを制御。初期値はLOW//
    analogWrite(3, HIGH);
    delay(500);
    analogWrite(3, LOW);
    analogWrite(4, HIGH);
    delay(500);
    analogWrite(4, LOW);
    analogWrite(5, HIGH);
    delay(500);
    analogWrite(5, LOW);

    //ここからマイナス側。LOWで点灯、HIGHで消える//
    for(int i = 8; i <= 53; i++){
        if (i != 53)
            digitalWrite(i, HIGH);
        else
            digitalWrite(i, LOW);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void loop()
{
  uint8_t data1, data2, data3;

  if (MIDI.read()){

    if (MIDI.getType() == midi::ControlChange){
      data1 = MIDI.getData1(); //CC No取得//
      data2 = MIDI.getData2(); //CC 値を取得//

      switch (data1)
      {
        case 2:
        data2 = data2 * 2; //CCの値を2倍(0-254)に変換//
        analogWrite(2, data2); //ポートに送る//
        break;

        case 3:
        data2 = data2 * 2;
        analogWrite(3, data2);
        break;

        case 4:
        data2 = data2 * 2;
        analogWrite(4, data2);
        break;
      }
    } else if (MIDI.getType() == midi::NoteOn){
      data1 = MIDI.getData1(); //Note No取得//
      data2 = MIDI.getData2(); //ベロシティ 値を取得//

      switch(data1){
        case 48:
        digitalWrite(12, LOW);
        break;

        case 49:
        digitalWrite(11, LOW);
        break;

        case 50:
        digitalWrite(10, LOW);
        break;

        case 51:
        digitalWrite(9, LOW);
        break;

        case 52:
        digitalWrite(8, LOW);
        break;

        case 53:
        digitalWrite(22, LOW);
        break;

        case 54:
        digitalWrite(23, LOW);
        break;

        case 55:
        digitalWrite(24, LOW);
        break;

        case 56:
        digitalWrite(25, LOW);
        break;

        case 57:
        digitalWrite(26, LOW);
        break;

        case 58:
        digitalWrite(27, LOW);
        break;

        case 59:
        digitalWrite(28, LOW);
        break;

        case 60:
        digitalWrite(29, LOW);
        break;

        case 61:
        digitalWrite(30, LOW);
        break;

        case 62:
        digitalWrite(31, LOW);
        break;

        case 63:
        digitalWrite(32, LOW);
        break;

        case 64:
        digitalWrite(33, LOW);
        break;

        case 65:
        digitalWrite(34, LOW);
        break;

        case 66:
        digitalWrite(35, LOW);
        break;

        case 67:
        digitalWrite(36, LOW);
        break;

        case 68:
        digitalWrite(37, LOW);
        break;

        case 69:
        digitalWrite(38, LOW);
        break;

        case 70:
        digitalWrite(39, LOW);
        break;

        case 71:
        digitalWrite(40, LOW);
        break;

        case 72:
        digitalWrite(41, LOW);
        break;

        case 73:
        digitalWrite(42, LOW);
        break;

        case 74:
        digitalWrite(43, LOW);
        break;

        case 75:
        digitalWrite(44, LOW);
        break;

        case 76:
        digitalWrite(45, LOW);
        break;

        case 77:
        digitalWrite(46, LOW);
        break;

        case 78:
        digitalWrite(47, LOW);
        break;

        case 79:
        digitalWrite(48, LOW);
        break;

        case 80:
        digitalWrite(49, LOW);
        break;

        case 81:
        digitalWrite(50, LOW);
        break;

        case 82:
        digitalWrite(51, LOW);
        break;

        case 83:
        digitalWrite(52, LOW);
        break;

        case 84:
        digitalWrite(53, LOW);
        break;
      }
    } else if (MIDI.getType() == midi::NoteOff){
      data1 = MIDI.getData1(); //Note No取得//
      data2 = MIDI.getData2(); //ベロシティ 値を取得//
      
      switch(data1){
        case 48:
        digitalWrite(12, HIGH);
        break;

        case 49:
        digitalWrite(11, HIGH);
        break;

        case 50:
        digitalWrite(10, HIGH);
        break;

        case 51:
        digitalWrite(9, HIGH);
        break;

        case 52:
        digitalWrite(8, HIGH);
        break;

        case 53:
        digitalWrite(22, HIGH);
        break;

        case 54:
        digitalWrite(23, HIGH);
        break;

        case 55:
        digitalWrite(24, HIGH);
        break;

        case 56:
        digitalWrite(25, HIGH);
        break;

        case 57:
        digitalWrite(26, HIGH);
        break;

        case 58:
        digitalWrite(27, HIGH);
        break;

        case 59:
        digitalWrite(28, HIGH);
        break;

        case 60:
        digitalWrite(29, HIGH);
        break;

        case 61:
        digitalWrite(30, HIGH);
        break;

        case 62:
        digitalWrite(31, HIGH);
        break;

        case 63:
        digitalWrite(32, HIGH);
        break;

        case 64:
        digitalWrite(33, HIGH);
        break;

        case 65:
        digitalWrite(34, HIGH);
        break;

        case 66:
        digitalWrite(35, HIGH);
        break;

        case 67:
        digitalWrite(36, HIGH);
        break;

        case 68:
        digitalWrite(37, HIGH);
        break;

        case 69:
        digitalWrite(38, HIGH);
        break;

        case 70:
        digitalWrite(39, HIGH);
        break;

        case 71:
        digitalWrite(40, HIGH);
        break;

        case 72:
        digitalWrite(41, HIGH);
        break;

        case 73:
        digitalWrite(42, HIGH);
        break;

        case 74:
        digitalWrite(43, HIGH);
        break;

        case 75:
        digitalWrite(44, HIGH);
        break;

        case 76:
        digitalWrite(45, HIGH);
        break;

        case 77:
        digitalWrite(46, HIGH);
        break;

        case 78:
        digitalWrite(47, HIGH);
        break;

        case 79:
        digitalWrite(48, HIGH);
        break;

        case 80:
        digitalWrite(49, HIGH);
        break;

        case 81:
        digitalWrite(50, HIGH);
        break;

        case 82:
        digitalWrite(51, HIGH);
        break;

        case 83:
        digitalWrite(52, HIGH);
        break;

        case 84:
        digitalWrite(53, HIGH);
        break;

      }
    } else {

    }
  }

  if(millis() % 10 == 0){
    val0 = analogRead(0)/8*(-1)-1;
    if (val0 != lastVal0){
    MIDI.sendControlChange(74, val0, 1);}         // (CC No, 値 , MIDI ch)
    lastVal0 = val0;

    val1 = analogRead(1)/8*(-1)-1;
    if (val1 != lastVal1){
    MIDI.sendControlChange(71, val1, 1);}         // (CC No, 値 , MIDI ch)
    lastVal1 = val1;

    val2 = analogRead(2)/8*(-1)-1;
    if (val2 != lastVal2){
    MIDI.sendControlChange(80, val2, 1);}         // (CC No, 値 , MIDI ch)
    lastVal2 = val2;

    val3 = analogRead(3)/8*(-1)-1;
    if (val3 != lastVal3){
    MIDI.sendControlChange(46, val3, 1);}         // (CC No, 値 , MIDI ch)
    lastVal3 = val3;

    val4 = analogRead(4)/8*(-1)-1;
    if (val4 != lastVal4){
    MIDI.sendControlChange(79, val4, 1);}         // (CC No, 値 , MIDI ch)
    lastVal4 = val4;

    val5 = analogRead(5)/8*(-1)-1;
    if (val5 != lastVal5){
    MIDI.sendControlChange(8, val5, 1);}         // (CC No, 値 , MIDI ch)
    lastVal5 = val5;

    val6 = analogRead(6)/8*(-1)-1;
    if (val6 != lastVal6){
    MIDI.sendControlChange(11, val6, 1);}         // (CC No, 値 , MIDI ch)
    lastVal6 = val6;

    val7 = analogRead(7)/8*(-1)-1;
    if (val7 != lastVal7){
    MIDI.sendControlChange(10, val7, 1);}         // (CC No, 値 , MIDI ch)
    lastVal7 = val7;
  }

}