int main(){
	while(1){
        
        //motor(3, 100);        //right motor -- 3
        //motor(1, 100);        //left motor -- 1
	
        if(analog10(4) > 512)//left sensor ... sees black
        {//right wheel slow down so left can move away from black.
            motor(3, 25);
        }
        else{motor(3, 100);}
        
        if(analog10(8) > 512)//right sensor ... sees black
        {//left wheel slow down so right can move away from black.
            motor(1, 25);
        }
        else{motor(1, 100);}
    }
	return 0;
}
