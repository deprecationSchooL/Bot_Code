int main(){
	while(1){
clear_motor_position_counter(1);//left motor
clear_motor_position_counter(3);//right motor
        if(get_motor_position_counter(1) == get_motor_position_counter(3)){
				motor(3, 100);        //right motor -- 3
				motor(1, 100);        //left motor -- 1
		}
		if(get_motor_position_counter(1) > get_motor_position_counter(3)){
			motor(3, 20);        //right motor -- 3
		}
		if(get_motor_position_counter(1) < get_motor_position_counter(3)){
			motor(1, 20);        //left motor -- 1
		}
	}
}

//printf("motor1: %d  motor2: %d",get_motor_position_counter(1),get_motor_position_counter(3));
