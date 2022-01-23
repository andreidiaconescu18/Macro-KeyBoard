/*
 * Functions for keys
 */
#include "data.h" 

void connect_via_ssh()
{
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('2');
  delay(100);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.println(String("ssh ")+USER+String("@")+HOSTNAME);
  delay(3000);
  Keyboard.println(PASSWORD);
  delay(100);
}

void disconnect_from_ssh()
{
  Keyboard.println("exit");
  delay(2000);
  Keyboard.println("exit");
}

void move_mouse_up_whiteboard()
{
  Mouse.press();
  Mouse.move(0,3,0);
  Mouse.release();
}

void move_mouse_down_whiteboard()
{
  Mouse.press();
  Mouse.move(0,-3,0);
  Mouse.release();
}

void move_mouse_left_whiteboard()
{
  Mouse.press();
  Mouse.move(3,0,0);
  Mouse.release();
}

void move_mouse_right_whiteboard()
{
  Mouse.press();
  Mouse.move(-3,0,0);
  Mouse.release();
}

void open_cmd()
{
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.println("cmd");
  delay(100);
}

void open_powershell()
{
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.println("powershell");
  delay(100);
}

void play_on_youtube(String link)
{
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('2');
  delay(100);
  Keyboard.releaseAll();
  Keyboard.println(String("start chrome ")+ link);
  Keyboard.println("exit");
}
 
void print_not_implement()
 {
  Keyboard.println("Not implemented");
 }

void print_not_handled()
 {
  Keyboard.println("Not handled");
 }

void run_vs_code()
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('n');
  delay(200);
  Keyboard.releaseAll();
}

void set_arduino_rights()
{
  connect_via_ssh();
  Keyboard.println("sudo chmod a+rw /dev/ttyACM0");
  disconnect_from_ssh();
  
}

void turn_on_light()
{
  open_powershell();
  Keyboard.println(LIGHT_ON);
  Keyboard.println("exit");
}

void turn_off_light()
{
  open_powershell();
  Keyboard.println(LIGHT_OFF);
  Keyboard.println("exit");
  
}

void upload_sketch()
{
   Keyboard.press(KEY_LEFT_CTRL);
   Keyboard.press('U');
   delay(200);
   Keyboard.releaseAll();
}
