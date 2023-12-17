int final_de_carrera=7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(final_de_carrera,INPUT_PULLUP);
  while (final_de_carrera==1) {
    digitalRead(final_de_carrera);
    Serial.println("while on");
  }
  Serial.println("while off");
}
void loop() {
  // put your main code here, to run repeatedly:

}