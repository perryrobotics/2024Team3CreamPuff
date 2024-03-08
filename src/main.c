#include "movement.h"
#include <kipr/wombat.h>
#include "constants.h"
#include "sensors.h"

//G3, You forgot the drawer.
int main()
{

    printf("The destroyer remade.\n \bbeta sometimes i wonder why im losing braincells and then I rememer it's cuz I hang out with goofy goobers like sanjeev, dheeraj, and shaurya\n; ");
    enable_servos();
    // GET TO START POSITION
    set_servo_position(ARM, ARM_BACK);
    set_servo_position(CLAW, CLAW_CLOSED);

    //msleep(3000);
    //wait_for_light(1);
    forward_to_black(800,0); //Hit first black line
    forward(800,600);
    set_servo_position(CLAW, CLAW_OPEN);
    set_servo_position(ARM, ARM_DOWN);
    msleep(1000);
    right(800, 400); 
    forward(800,1000);
    set_servo_position(CLAW,CLAW_CLOSED);
    msleep(950);
    left(900,2100); //BIG LEFT TO DROP OFF POMS
    forward(900,700);
    set_servo_position(CLAW,CLAW_OPEN);
    msleep(950);
    set_servo_position(ARM,ARM_UP);
    backward(900,700);
    right(900,1650);
    set_servo_position(CLAW,CLAW_OPEN);
    msleep(950);
    set_servo_position(ARM,ARM_DOWN);    

    //GET SECOND PILE
    right_to_black(800,RIGHT_LINE); //Begin Line Following   
    forward(800,1350);
    left(800, 200);
    set_servo_position(CLAW,CLAW_CLOSED);
    msleep(950);
    left(800,1600);
    forward(800,2000);
    set_servo_position(CLAW,CLAW_OPEN);
    msleep(950);
    //forward(800, 700);
    set_servo_position(ARM,ARM_UP);
    msleep(750);
    backward(800,2700);
    right_to_black(800, RIGHT_LINE);
    right(800, 200);
    
    set_servo_position(ARM, ARM_DOWN);
    left(800, 700);
    right(800, 1400);
    left(800, 700);
    
    //POMS DELIVERED PUSH ROCK!!!
    forward(900,750); //get past hump
    forward_to_black(900, LEFT_LINE);// CENTER OF TABLE
    forward(800,2300);
    set_servo_position(ARM, ARM_UP);
    set_servo_position(CLAW,CLAW_CLOSED);
    left(900,1050);
    set_servo_position(ARM, 1600);   
    forward(100,250);
    set_servo_position(ARM, 1400);
    msleep(1000);
    
    //SWITCH SWITCHED!!!!!
//================================================================================================

    backward(800, 900);
    set_servo_position(ARM, ARM_BACK); // GET ARM OUT OF THE WAY!!!
    left(1200,600);
    forward(100, 200);
    left_to_black(800, LEFT_LINE);
    msleep(2000);
    follow_to_black(700, LEFT_LINE, RIGHT_LINE);
    follow_to_black(700, RIGHT_LINE, LEFT_LINE);
    right(700, 1700); // TURBN TOWARDS AIRLOCK
    forward(800, 3500);
    left(600, 300);
    //forward(800, 1225);
    //left(600, 350);
    backward(1000,100);
    //right(800,10);
    backward(800, 1170);
    //Air Lock Opened!
    /*
    right(600, 290);
    back_to_black(800, RIGHT_LINE);
    forward(800, 500);
    right_to_black(800, RIGHT_LINE);
    forward(800, 300);
    follow_to_black(700, LEFT_LINE, RIGHT_LINE);
    follow_to_black(700, RIGHT_LINE, LEFT_LINE);
    forward(800, 700);
    //right_to_black(800, RIGHT_LINE);
    follow_to_black(700, RIGHT_LINE, LEFT_LINE);
    follow_to_black(700, LEFT_LINE, RIGHT_LINE);
    //hi i was here - angel








    //left(800,745);
    //follow_to_black(700, LEFT_LINE, RIGHT_LINE);
    //follow_to_black(700, RIGHT_LINE, LEFT_LINE);
    //forward(810,435);
    //set_servo_position(CLAW, CLAW_CLOSED + 50);
    //move_servo_slowly(1500,ARM_BACK,ARM);
    //set_servo_position(ARM, ARM_BACK);
    //msleep(1500);
    //follow_to_ticks(800, LEFT_LINE, 6000);
    //follow_to_ticks(800, RIGHT_LINE, 2000);
    //left(800, 800);
    //left(800, 50);
    //forward(800, 50);
    //set_servo_position(ARM, ARM_UP);
    //right_to_black(800,RIGHT_LINE);
	/*



    /*
    right_to_black(800,LEFT_LINE);
    right(800,220);
    backward(800,5000);
	forward(800,2450);
    left(800,1000);
    forward(800,1000);
    left(800,232);
    forward(800, 1355);
	left(800,25);
    backward(800, 1000);
    //right(800, 1500);
   //backward(800,?);
   */
        /*
    left(500,700);
    forward(2000, 800);
    right_to_black(800, 5);
    backward(2700, 800);
	*/







        disable_servos();

    return 0;
}


