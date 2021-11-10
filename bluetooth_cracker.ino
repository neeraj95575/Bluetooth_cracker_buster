int cracker_switch = 7;

void setup()  
{
  Serial.begin(9600);         
  pinMode(cracker_switch,OUTPUT);
  Serial.println("Cracker Switch ready");
}

void loop()     
{
  if(Serial.available()>0)
    {  
     int incomingByte=Serial.read();
     
     if(incomingByte=='A')
       {
        digitalWrite(cracker_switch,HIGH);
        Serial.println("ON");
       }
              
     if(incomingByte=='B')
       {
        digitalWrite(cracker_switch,LOW);
        Serial.println("OFF");
     }    
   }
}
