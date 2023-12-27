#include <WiFi.h>
#include <WebServer.h>
#include <string.h>
#include "html.h"

//che so station mode
char* ssid = "Sir Hai T4" ;
char* password ="0987167931";

WebServer server(80);

int ledPin1 = 13 ;bool ledstatus1 = LOW ;
int ledPin2 = 12 ;bool ledstatus2 = LOW ;
int ledPin3 = 14 ;bool ledstatus3 = LOW ;
int ledPin4 = 27 ;bool ledstatus4 = LOW ;



void ketnoisever(){
  ledstatus1 = LOW ;
  ledstatus2 = LOW ;
  ledstatus3 = LOW ;
  ledstatus4 = LOW ;
   Serial.println("led1 : off");
    Serial.println("led2 : off");
     Serial.println("led3 : off");
      Serial.println("led4 : off");
   server.send(200,"text/html",HTMLGui(ledstatus1));
   server.send(200,"text/html",HTMLGui(ledstatus2));
   server.send(200,"text/html",HTMLGui(ledstatus3));
   server.send(200,"text/html",HTMLGui(ledstatus4));
}

/////////////////////////////
void led1on(){
  ledstatus1 = HIGH ;
  Serial.println("led1 : on");
  server.send(200,"text/html",HTMLGui(ledstatus1));
}
void led1off(){
  ledstatus1 = LOW;
  Serial.println("led1 : off");
  server.send(200,"text/html",HTMLGui(ledstatus1));
}

///////////////////////////////
void led2on(){
  ledstatus2 = HIGH ;
  Serial.println("led2 : on");
  server.send(200,"text/html",HTMLGui(ledstatus2));
}
void led2off(){
  ledstatus2 = LOW ;
  Serial.println("led2 : off");
  server.send(200,"text/html",HTMLGui(ledstatus2));
}
////////////////////////////////
void led3on(){
  ledstatus3 = HIGH ;
  Serial.println("led3 : on");
  server.send(200,"text/html",HTMLGui(ledstatus3));
}
void led3off(){
  ledstatus3 = LOW ;
  Serial.println("led3 : off");
  server.send(200,"text/html",HTMLGui(ledstatus3));
}
////////////////////////////////
void led4on(){
  ledstatus4 = HIGH ;
  Serial.println("led4 : on");
  server.send(200,"text/html",HTMLGui(ledstatus4));
}
void led4off(){
  ledstatus4 = LOW ;
  Serial.println("led4 : off");
  server.send(200,"text/html",HTMLGui(ledstatus4));
}
////////////////////////////
void eror(){
  server.send(400,"text/html","Not Found");
}





void setup() {
Serial.begin(115200);
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
pinMode(ledPin3,OUTPUT);
pinMode(ledPin4,OUTPUT);

WiFi.begin(ssid,password);
Serial.print("Connecting...");
while(WiFi.status()!=WL_CONNECTED){
  delay(500);
  Serial.print("...");
}
Serial.println(" ");
Serial.println(WiFi.localIP());
delay(50);
server.begin();
Serial.println("Conected Sever....");

server.on("/",ketnoisever);
server.on("/led1on",led1on);
server.on("/led1off",led1off);

server.on("/led2on",led2on);
server.on("/led2off",led2off);

server.on("/led3on",led3on);
server.on("/led3off",led3off);

server.on("/led4on",led4on);
server.on("/led4off",led4off);
server.onNotFound(eror);
}

void loop() {
  //192.168.49.15/ : Connect
  //192.168.49.15/led1on  : led1 on
  //192.168.49.15/led1off : led1 off

  //192.168.49.15/led2on  : led2 on
  //192.168.49.15/led2off : led2 off

  //192.168.49.15/led3on  : led3 on
  //192.168.49.15/led3off : led3 off

  //192.168.49.15/led4on  : led4 on
  //192.168.49.15/led4off : led4 off
  server.handleClient();

  if(ledstatus1){
    digitalWrite(ledPin1,HIGH);
  }else{
    digitalWrite(ledPin1,LOW);
  }

  if(ledstatus2){
    digitalWrite(ledPin2,HIGH);
  }else{
    digitalWrite(ledPin2,LOW);
  }

  if(ledstatus3){
    digitalWrite(ledPin3,HIGH);
  }else{
    digitalWrite(ledPin3,LOW);
  }

  if(ledstatus4){
    digitalWrite(ledPin4,HIGH);
  }else{
    digitalWrite(ledPin4,LOW);
  }
}






































