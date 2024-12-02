
#define PIXELS 1500 // total number of data samples including dummy outputs
#define F 4// clock rate in MHz, 0.5 1 2 or 4 should work.. 


#define SCK_PIN    22






void setup() {
  Serial.begin(115200);    delay(100);  Serial.println("");
  
  float uspf = (float) (6 + (32+PIXELS+14)* 4.0/((float) F));
  
  
  Serial.print("us per frame: ");
  Serial.println(uspf); 

  pinMode(SCK_PIN ,OUTPUT);
 
  //analogWriteFrequency(SCK_PIN, F*1000000);
  // analogWrite(SCK_PIN, 124); 


  ledcSetup(0, 4.0e9, 3);
  ledcAttachPin(SCK_PIN, 0);
  ledcWrite(0, 1);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
