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
}

void loop()
{
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

   delay(10);
}


