// Timur Maksiomv 2014
//
// A quick demo of how to use DS1302-library to make a quick
// DS1302:  CE pin    -> Arduino Digital 27
//          I/O pin   -> Arduino Digital 29
//          SCLK pin  -> Arduino Digital 31
//          VCC pin   -> Arduino Digital 33
//          GND pin   -> Arduino Digital 35
//

#include <DS1302RTC.h>
#include <Time.h>

// Init the DS1302
// Set pins:  CE, IO,CLK
DS1302RTC RTC(27, 29, 31);

// Optional connection for RTC module
#define DS1302_GND_PIN 33
#define DS1302_VCC_PIN 35


void setup()
{
  Serial.begin(9600);

  // Activate RTC module
  digitalWrite(DS1302_GND_PIN, LOW);
  pinMode(DS1302_GND_PIN, OUTPUT);

  digitalWrite(DS1302_VCC_PIN, HIGH);
  pinMode(DS1302_VCC_PIN, OUTPUT);

  Serial.println("RTC activated");

  delay(500);

  // Check clock oscillation  
  if (RTC.haltRTC())
    Serial.println("Clock stopped!");
  else
    Serial.println("Clock working.");

  // Check write-protection
  
  if (RTC.writeEN())
    Serial.println("Write allowed.");
  else
    Serial.println("Write protected.");

  delay ( 2000 );

  // Setup Time library  
  Serial.println("RTC Sync");
  setSyncProvider(RTC.get); // the function to get the time from the RTC
  if(timeStatus() == timeSet)
    Serial.println(" Ok!");
  else
    Serial.println(" FAIL!");

  delay ( 2000 );

 }

void loop()
{

  // Display time centered on the upper line
  lcd.setCursor(3, 0);
  print2digits(hour());
  Serial.print("  ");
  print2digits(minute());
  Serial.print("  ");
  print2digits(second());

  // Display abbreviated Day-of-Week in the lower left corner
  
  Serial.println(dayShortStr(weekday()));

  // Display date in the lower right corner
  lcd.setCursor(5, 1);
  Serial.print(" ");
  print2digits(day());
  Serial.print("/");
  print2digits(month());
  Serial.print("/");
  Serial.print(year());

  // Warning!
  if(timeStatus() != timeSet) {
    Serial.println(F("RTC ERROR: SYNC!"));
  }

  delay ( 1000 ); // Wait approx 1 sec
}

void print2digits(int number) {
  // Output leading zero
  if (number >= 0 && number < 10) {
    Serial.print("0");
  }
  Serial.print(number);
}
