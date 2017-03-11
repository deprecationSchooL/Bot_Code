int main(){
    enable_servos();
		set_servo_position(2,200); // move servo 1 to position 200 msleep(100); // give servo time to move
        while (get_servo_position(2) < 1800)
        { // move servo 1 in steps of 100
          set_servo_position(2,get_servo_position(2)+100);
          msleep(100); // give it time to move
        }
	
	
	
		/*while(1){
		set_servo_position(0,150);
		printf("Servo 0 at position 0\n");
		printf("press black button to continue\n");
		sleep(1);
		set_servo_position(1, 1500);
		sleep(1);
		set_servo_position(2,1900);
		set_servo_position(3,150);
		sleep(3);
		disable_servos();}
		*/
    
    /*next, enable the camera
     next, enable colors*/
	}
