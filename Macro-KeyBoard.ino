#include <PS2Keyboard.h>
#include <Keyboard.h>
#include <Mouse.h>

const int DataPin = 2;
const int IRQpin =  3;

PS2Keyboard keyboard;

void setup() {
  delay(1000);
  Keyboard.begin();
  Mouse.begin();
  keyboard.begin(DataPin, IRQpin);
  Serial.begin(9600);
  Serial.println("Keyboard Test:");
}

void loop() {
  if (keyboard.available()) {
    
    // read the next key
    char c = keyboard.read();
   
    switch(c){
    case PS2_ESC: PS2_ESC_handle(); break; 
    case PS2_F1: PS2_F1_handle(); break;
    case PS2_F2: PS2_F2_handle(); break;
    case PS2_F3: PS2_F3_handle(); break;
    case PS2_F4: PS2_F4_handle(); break;
    case PS2_F5: PS2_F5_handle(); break;
    case PS2_F6: PS2_F6_handle(); break;
    case PS2_F7: PS2_F7_handle(); break;
    case PS2_F8: PS2_F8_handle(); break;
    case PS2_F9: PS2_F9_handle(); break;
    case PS2_F10: PS2_F10_handle(); break;
    case PS2_F11: PS2_F11_handle(); break;
    case PS2_F12: PS2_F12_handle(); break;
    case 'o': PS2_O_handle(); break;  
    default: print_not_handled();
    }
    /*    
    }else if (c == PS2_ENTER) {
      Serial.println();
    } else if (c == PS2_TAB) {
      Serial.print("[Tab]");
    } else if (c == PS2_ESC) {
      Serial.print("[ESC]");
    } else if (c == PS2_PAGEDOWN) {
      Serial.print("[PgDn]");
    } else if (c == PS2_PAGEUP) {
      Serial.print("[PgUp]");
    } else if (c == PS2_LEFTARROW) {
      Serial.print("[Left]");
    } else if (c == PS2_RIGHTARROW) {
      Serial.print("[Right]");
    } else if (c == PS2_UPARROW) {
      Serial.print("[Up]");
    } else if (c == PS2_DOWNARROW) {
      Serial.print("[Down]");
    } else if (c == PS2_DELETE) {
      Serial.print("[Del]");
    } else if (c == PS2_F1) {
      Mouse.move(0, 40);
      Serial.print("[F1]");
    } else if (c == PS2_F2) {
      Serial.print("[F2]");
      } else if (c == PS2_F3) {
      Serial.print("[F3]");
        } else if (c == PS2_F4) {
      Serial.print("[F4]");
    } else {
      
      // otherwise, just print all normal characters
      Serial.print(c);
      Keyboard.print(c);
      
    }*/
  }
}
