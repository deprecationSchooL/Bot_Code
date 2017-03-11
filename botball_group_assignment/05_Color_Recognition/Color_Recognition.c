/* This program points a servo (that is plugged into port 0 and
centered on the camera?s field of vision) towards an object that
fits into the color model defined for channel 0*/
int main() {
    int offset, x, y;
    enable_servos();
    track_update(); // get most recent camera image and process it
    while(black_button() == 0) {
         x = track_x(0,0);  // get image x data
         y = track_y(0,0);  //    and y data
         if(track_count(0) > 0) {  // there is a blob
             printf("Blob is at (%d,%d)\n",x,y);
             offset=5*(x-80); //amount to deviate servo from center
             set_servo_position(3,2014+offset);
}
else {
             printf("No object in sight\n");
         }
         sleep(0.2); // don't rush print statement update
         track_update();  // get new image data before repeating
    }
    disable_servos();
    printf("All done\n");
}
