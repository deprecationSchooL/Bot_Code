int cross = 0;
int cross2 = 0;
int pR = 0;
int digital(int port_no);
void cLine(){
	while(1)
	{
		if(analog(0) > 600)
		{
			motor(2,-35);
			msleep(200);
			motor(2,0);
			motor(0,25);
			msleep(200);
			motor(0,0);
			//exit(0);
			//msleep(5);
			motor(2,0);
		}
	msleep(25);
	}
}

void cLine2()
{
        while(1)
        {
                if(analog(2) > 700)
                {
			//cross = 1;

                        motor(0,-35);
                        msleep(200);
                        motor(0,0);
                        motor(2,25);
                        msleep(200);
                        motor(2,0);
                        //exit(0);
                        //msleep(5);
                        motor(0,0);
                }
        msleep(25);
        }
}


int main(){
	//printf("Hello, World!\n");
	int l = 2;
	int r = 0;
	int sensorL = 1;
	int sensorR = 1; 
	int sensorC = 1;
	void clear_motor_position_counter(int m);
	int get_motor_position_counter(int m);
	void motor(int m, int p);
	int get_create_normalized_angle();
	void set_create_total_angle(int angle);
	void set_create_normalized_angle(int angle);
	int get_motor_position_counter(int m);
	clear_motor_position_counter(r);
	clear_motor_position_counter(l);
	int change = 0;
	int posL = 0;
	int posR = 0;
	int change2 = 0;
	int mv = 10;
 	
	void checkLine(int sensorL, int sensorR, int sensorC, int l, int r, int posL, int posR, thread tid);
	void checkLine2(int sensorL, int sensorR, int sensorC, int l, int r, int posL, int posR, thread tid2
	
	thread tid;
	tid = thread_create(cLine);
	thread_start(tid);
	
	while(1){
		posR = get_motor_position_counter(r);
		posL = get_motor_position_counter(l);
		sensorL = analog(0);
		sensorR = analog(2); 
		sensorC = analog(1);
	
		if(analog(0) < 300)
		{
			posL = posL + mv;
			mrp(l,400,posL);
			bmd(l);
		}
		else{
			posR = posR + mv;
			mrp(r, 400, posR);
			bmd(r);	
		}
		if(analog(0) > 500 && analog(1) > 500 && analog(2) > 500){
			posR = posR + mv;
                        mrp(r, 400, posR);
                        bmd(r);
		}
		if(analog(0) < 300 && analog(1) < 300 && analog(2) < 300){
			posL = posL + mv;
                        mrp(l,400,posL);
                        bmd(l);
		}
		if(analog(0) > 500 && analog(1) > 500 && analog(2) < 300){
			thread_destroy(tid);
			break;
		}		
		if(posL > 1800){
			thread_destory(tid);
			break;
		}
		//printf("%d %d %d ", sensorL, sensorC, sensorR);
		posR = get_motor_position_counter(r);
		posL = get_motor_position_counter(l);
		}
		thread tid;
        	tid = thread_create(cLine);
        	thread_start(tid);
		posR = get_motor_position_counter(r);
                posL = get_motor_position_counter(l);
		if(analog(0) < 300)
                {       
                        posL = posL + mv;
                        mrp(l,400,posL);
                        bmd(l);
                }
		while(1){
                posR = get_motor_position_counter(r);
                posL = get_motor_position_counter(l);
                sensorL = analog(0);
                sensorR = analog(2);
                sensorC = analog(1);

                if(analog(2) < 300)
                {       
                        posL = posL + mv;
                        mrp(r,400,posL);
                        bmd(r);
                }
		else{
		}
		if(analog(0) < 300 && analog(1) < 300 && analog(2) < 300){
                        posR = posR + 25;
                        mrp(r,400,posR);
                        bmd(r);
                }
                if(analog(0) > 500 && analog(1) > 500 && analog(2) > 500){
                	posR = posR + mv;
				mrp(r,400,posR);
				bmd(r);
		}
	}
	thread_destroy(tid2);
	return 0;								
}

