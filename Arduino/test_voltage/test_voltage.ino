
int DAC_PIN = 14;


float control_voltage;

void setup() {
  // put your setup code here, to run once:
analogReference(INTERNAL);






analogWrite(DAC_PIN,find_code(0.4));
}

void loop() {


  
  
  
  // put your main code here, to run repeatedly:

}




int find_code(float control_voltage){
  const float vref = 1.2;
  const int dac_res = 12;
  const float levels = 2^dac_res; //4096
  int code;
  
  code = int(round((control_voltage/vref) * (levels-1)));
  
  
}



