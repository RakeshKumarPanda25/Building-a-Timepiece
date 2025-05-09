int LED[] = {3,4,5,6,7,8,9,10,11,12,13,A0,A1,A2,A3,A4,A5};

int sensorPin = 2;

unsigned int n,ADCvalue,propeller_posn;
unsigned long previousTime = 0;

byte hours = 12;    // set hours
byte minutes = 15;  // set minutes
byte seconds = 0;  // set seconds

int val;

void setup() 
{
  for(int i=0;i<17;i++){  
    pinMode(LED[i],OUTPUT);  
  }
  pinMode(sensorPin,INPUT_PULLUP);   
  
  if(hours == 12)
  hours = 0;
}

void loop(){
    val = digitalRead(sensorPin);
    
    while (val == LOW){
    val = digitalRead(sensorPin);
  }

      
  if (millis() >= (previousTime)){
     previousTime = previousTime + 1000;  //   For tesitng purpose you can use 10 in place of 1000 to make the clock run fast.
     
     seconds = seconds+1;
     if (seconds == 60)
     {
        seconds = 0;
        minutes = minutes+1;
     }
     if (minutes == 60)
     {
        minutes = 0;
        hours = hours+1;
     }
     if (hours == 12)
     {
        hours = 0;
     }   
  }  
  
  propeller_posn=30;
  n=0;
  
  while(n < 60){
      
  drawMinuteMarker();

  if ((propeller_posn==0) || (propeller_posn==5) || (propeller_posn==10) || (propeller_posn==15) || (propeller_posn==20) || (propeller_posn==25) || (propeller_posn==30) || (propeller_posn==35) || (propeller_posn==40) || (propeller_posn==45) || (propeller_posn==50) || (propeller_posn==55))
  drawHourMarker();
  
  if ((propeller_posn==0) || (propeller_posn==15) || (propeller_posn==30) || (propeller_posn==45))
  drawQuarterMarker(); 
 
  if((propeller_posn == hours*5) || (( propeller_posn == 0 ) && (hours == 0))) 
  drawHoursHand();
   
  if(propeller_posn == minutes)
  drawMinutesHand();   
  
  if(propeller_posn == seconds)
  drawSecondsHand();
  
  delayMicroseconds(120);     // for LED pixel width   (change the value according to motor speed. Increase for low speed, decrease for high speed motor)
  
  displayClear(); 

  drawInner_Circle();
 
  delayMicroseconds(650);   // for the gap between LED pixels/minutes markers  (change the value according to motor speed. Increase for low speed, decrease for high speed motor)
  
  n++;
  propeller_posn++;
  if(propeller_posn == 60)
  propeller_posn=0;
  }
  
    val = digitalRead(sensorPin);  
    
    while (val == HIGH){
    val = digitalRead(sensorPin); 
    }     
}

//=========================

void displayClear(){
  for(int i=0;i<17;i++){  
    digitalWrite(LED[i],LOW); 
  } 
}

void drawMinuteMarker(){
  digitalWrite(LED[16],HIGH);
  }

void drawHourMarker(){
  digitalWrite(LED[15],HIGH);
  digitalWrite(LED[14],HIGH); 
}

void drawQuarterMarker(){
  digitalWrite(LED[13],HIGH);
  digitalWrite(LED[12],HIGH); 
}

void drawHoursHand(){
  for(int i=0;i<7;i++){  
    digitalWrite(LED[i],HIGH);
  }
}

void drawMinutesHand(){ 
  for(int i=0;i<9;i++){  
    digitalWrite(LED[i],HIGH);
  }
  }

void drawSecondsHand(){ 
  for(int i=0;i<11;i++){  
    digitalWrite(LED[i],HIGH);
  }
}  

  void drawInner_Circle()
  {
  digitalWrite(LED[0],HIGH);  
  delayMicroseconds(30);
  digitalWrite(LED[0],LOW);
  }  
