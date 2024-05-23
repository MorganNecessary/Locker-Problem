void setup() {
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  Serial.println("How many lockers are in the school?");
  while(Serial.available() == 0){} // waits until person starts typing
  // read the incoming byte
  int ARRAY_SIZE = Serial.parseInt()+1;
  int bitArray[ARRAY_SIZE];  // Declare an array with n elements
  
  // Initialize all elements of the array to 0
  for (int i = 0; i < ARRAY_SIZE; i++) {
    bitArray[i] = 0;
  }

 for (int n = 1; n < ARRAY_SIZE; n++){
  for (int i = 0; i < ARRAY_SIZE; i = i+n){
    if (bitArray[i] == 0){
      bitArray[i] = 1;
    }
    else if (bitArray[i]==1){
      bitArray[i] = 0;
    }
  }
 }

  // Print the array values to the Serial Monitor
  for (int i = 1; i < ARRAY_SIZE; i++) {
    if (bitArray[i] == 1) {
      Serial.print("Locker ");
      Serial.print(i);
      Serial.print(" is ");
      Serial.println("open.");
    }
    else{
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
