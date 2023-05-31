int LED = 2;
int PIR = 4;
int MIC = 6;
int VALPIR;
int VALMIC;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
  pinMode(MIC, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  VALPIR = digitalRead(PIR);
  VALMIC = digitalRead(MIC);

  if(VALPIR == HIGH){
    digitalWrite(LED, HIGH);
  }
  if(VALMIC == HIGH){
    digitalWrite(LED, LOW);
  }
  Serial.print("Valor del PIR: ");
  Serial.print(VALPIR);
  Serial.print(" Valor del microfono: ");
  Serial.println(VALMIC);
  delay(1000);
}
