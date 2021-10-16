/*
 * All keyboard key handles
 */

void PS2_ESC_handle()
{
  print_not_implement();
}

void PS2_F1_handle()
{
  turn_on_light();
}

void PS2_F2_handle()
{
  turn_off_light();
}

void PS2_F3_handle()
{
  print_not_implement();
}

void PS2_F4_handle()
{
  print_not_implement();
}

void PS2_F5_handle()
{
  print_not_implement();
}

void PS2_F6_handle()
{
  print_not_implement();
}

void PS2_F7_handle()
{
  print_not_implement();
}

void PS2_F8_handle()
{
  print_not_implement();
}

void PS2_F9_handle()
{
  print_not_implement();
}

void PS2_F10_handle()
{
  print_not_implement();
}

void PS2_F11_handle()
{
  print_not_implement();
}

void PS2_F12_handle()
{
  play_on_youtube("https://youtu.be/GLHXZDORBjQ?t=31");
}

void PS2_U_handle()
{
  print_not_implement();
}

void PS2_O_handle()
{
  play_on_youtube("https://youtu.be/YnopHCL1Jk8");
}

void PS2_UPARROW_handle()
{
  move_mouse_up_whiteboard();
}

void PS2_DOWNARROW_handle()
{
  move_mouse_down_whiteboard();
}

void PS2_LEFTARROW_handle()
{
  move_mouse_left_whiteboard();
}

void PS2_RIGHTARROW_handle()
{
   move_mouse_right_whiteboard();
}


void PS2_SPACE_handle()
{
  run_vs_code();
}
