int main() {
     int x, xMax = 160;
     while(black_button()==0){
		track_update(); //get most recent camera image and process it x = track_x(0,0); // get image x data
		if(track_count(0)>0){ // there is a blob
			printf("Blob x position is %d\n",x);
			if(x >= 0 && x < (xMax/4)){ // if object is by motor 3
                  fd(3);
				}
            else if(x >= (xMax/4) && x < (xMax/2)){ // object by 2
                  fd(2);
				}
            else if(x >= (xMax/2) && x < ((3*xMax)/4)){ // object by 1
				fd(1);}
			else if(x >= ((3*xMax)/4) && x <= xMax){
			fd(0);}
			}
         sleep(0.1);
     }
ao(); 
}
