  �
_CLEOCLEO v2.0.0.0 test script�_CLEO � ���
_CLEO  �     �                                          �  �
VC.CLEO.asiM ����
%d    ���  �

 M �����
� 
 �

  ���

 �
   �
DEAD  �
   ���  �
  M �����
  %d + %d = %d �
   ���
  �
 �
  �
d  �
  �
 This is %.4X opcode: %d %d %d %d��
      �     �   C  �CI	  HB  HB+model id = %d; weapon id = %d; weather = %d      �M %���     �I   HB  CTest string  �M �����
����
 �

 %d + %d = %d �

  ���
 �  �
VC.CLEO.asirb M �����
  �
VC.CLEO.asi size is %d bytes�  �
  ��
D @ ��   �
D @   �
0x400044 = %.6X    �  � M 3���T      �       ���=o          �?� �     C  C0601� �
� �  �M ����@ @ @ P �
@ @   
  @ @ �
%.6X points to %.6X@ @   �  �
BIGMONEYM ����	 ��  ����                                                                                HEX    J  P   VAR '   Arena_door_1    Arena_door_2    Car_Showroom_asset �  current_time_in_ms �  cut_scene_time |   default_wait_time    Film_Studio_asset �  film_studio_back_gate_closed   film_studio_back_gate_open   film_studio_front_gate_closed   film_studio_front_gate_open   Ice_Cream_Factory_asset �  Lance_Vance �   onmission 9  passed_ASS1_Rub_Out �   passed_COK1_The_Chase �   passed_COK2_Phnom_Penh_86 �   passed_COK3_The_Fastest_Boat �   passed_COK4_Supply_and_Demand �   passed_COL1_Treacherous_Swine �   passed_COL2_Mall_Shootout �   passed_COL3_Guardian_Angels �   passed_COL4_Sir_Yes_Sir �   passed_COL5_All_Hands_On_Deck �   passed_HAT1_Juju_Scramble   passed_HAT2_Bombs_Away   passed_HAT3_Dirty_Lickins   passed_KENT1_Death_Row �   passed_LAW1_The_Party �   passed_LAW2_Back_Alley_Brawl �   passed_LAW3_Jury_Fury �   passed_LAW4_Riot �   passed_ROCK1_Love_Juice    passed_ROCK2_Psycho_Killer !  passed_ROCK3_Publicity_Tour "  passed_TEX1_Four_Iron �   player_actor    player_char    Print_Works_asset �  FLAG   SRC 8  {$CLEO}
0000: 

0ADF: add_dynamic_GXT_entry "_CLEO" text "CLEO v2.0.0.0 test script"
03E5: text_box '_CLEO' 
wait 4000
03E6: remove_text_box 
0AE0: remove_dynamic_GXT_entry "_CLEO"

0B10: 0@ = 0@ AND 0xFF
0B11: 0@ = 0@ OR 0x80
0B12: 0@ = 1@ XOR 1
0B13: 0@ = NOT 0@
0B14: 0@ = 0@ MOD 5
0B15: 0@ = 0@ SHR 8
0B16: 0@ = 0@ SHL 8 
0B17: 0@ _&= 1@
0B18: 0@ |= 1@
0B19: 0@ ^= 1@
0B1A: ~ 0@
0B1B: 0@ %= 1@
0B1C: 0@ >>= 1@
0B1D: 0@ <<= 1@    

if
 0AAB: file_exists "VC.CLEO.asi"  
then
 0ACE: show_formatted_text_box "%d" 0@
 wait 1000
 03E6: remove_text_box 
end

if
 0AC8: 10@ = allocate_memory_size 260
then
 0ADB: 10@ = car_model #BFINJECT name
 0ACA: show_text_box 10@
 wait 4000
 03E6: remove_text_box 
 0AC9: free_allocated_memory 10@
end

0AC7: 0@ = var 1@ offset
0ADE: 0@ = text_by_GXT_entry "DEAD"
0ACA: show_text_box 0@
wait 1000
03E6: remove_text_box 

if
 0AC8: 0@ = allocate_memory_size 260
then
 0AD3: 0@ = format "%d + %d = %d" 2 2 4
 0ACA: show_text_box 0@
 wait 1000
 03E6: remove_text_box 
 0AC9: free_allocated_memory 0@
end

0A8E: 4@ = 3 + 2 // int
0A8F: 5@ = 4@ - 1 // int
0A90: 6@ = 100 * 5@ // int
0A91: 7@ = 6@ / 5 // int    
0ACF: show_formatted_styled_text "This is %.4X opcode: %d %d %d %d" time 2000 style 1 0x0ACF 4@ 5@ 6@ 7@
wait 2000

17@ = 0
repeat
wait 0
03F0: enable_text_draw 1 
0604: 6@ = weapon 13 model
0605: 7@ = model #TEC9 weapon_id
0607: 8@ = get_current_weather
0343: set_text_linewidth 500.0
0349: text_draw_style = 1
0609: show_formatted_text_position 50.0 50.0 text "model id = %d; weapon id = %d; weather = %d" 6@ 7@ 8@
until 17@ > 2000



17@ = 0
repeat
wait 0
03F0: enable_text_draw 1 
0349: text_draw_style = 0
0608: show_text_position 50.0 150.0 text "Test string" 
until 17@ > 2000

0AC6: 10@ = label @label offset
0AD3: 10@ = format "%d + %d = %d" 2 2 5
0ACA: show_text_box 10@
wait 2000
03E6: remove_text_box 

0A99: chdir 0
if
 0A9A: 1@ = openfile "VC.CLEO.asi" mode "rb"  // IF and SET
then
 0A9C: 2@ = file 1@ size
 0AD0: show_formatted_text_lowpriority "VC.CLEO.asi size is %d bytes"  time 2000 2@
 0A9B: closefile 1@
end   


wait 2000
0A8C: write_memory 0x400044 size 4 value 0xDEAD virtual_protect 0
0A8D: 8@ = read_memory 0x400044 size 4 virtual_protect 0
0ACE: show_formatted_text_box "0x400044 = %.6X" 8@


while true
wait 0


    if
     0601: is_button_pressed_on_pad 15 with_sensitivity 0xFF  // Vehicle Enter/Exit
    then
     0054: store_player $PLAYER_CHAR position_to 0@ 1@ 2@        
     02CE: 2@ = ground_z 0@ 1@ 2@
     inc(2@, 0.1)   
     016F: draw_shadow 3 at 0@ 1@ 2@ angle 0.0 size 1.0 intensity 150 colour 255 0 0
     0608: show_text_position 150.0 150.0 text "0601"
     0602: emulate_button_press_on_pad 2 with_sensitivity 0xFF
     
     0ADD: spawn_car_with_model #RHINO like_a_cheat
    end 

    if
     8603: not is_camera_in_widescreen_mode
    then
     0606: set_memory_offset memory_pointer 0x400040 memory_to_point 0x500040 virtual_protect 1
     0A8D: 3@ = read_memory 0x400040 size 4 virtual_protect 0
     3@ += 0x400040
     0AD1: show_formatted_text_highpriority "%.6X points to %.6X" time 1 0x400040 3@
    end
    
    if
     0ADC: test_cheat "BIGMONEY"
    then
     0109: player $PLAYER_CHAR money += 2000000 
    end
    
    
end


:label
hex
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
end
�  __SBFTR 