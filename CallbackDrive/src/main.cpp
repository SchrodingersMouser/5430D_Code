#include "v5_vcs.h"
#include "../../config.h"

int main() {
    
}

void piston(){
}

void move(double leftFront, double leftBack, double rightFront, //flatten these numbers with the curve here: https://www.desmos.com/calculator/rerhnlaim4
          double rightBack){     
    mtr_dt_left_front.setVelocity(leftFront, percent); // define the motors
    mtr_dt_left_back.setVelocity(leftBack, percent);
    mtr_dt_right_front.setVelocity(rightFront, percent);
    mtr_dt_right_back.setVelocity(rightBack, percent);
}

void moveArcade(double forward, double strafe, double turn){
    move(forward + strafe + turn, forward - strafe + turn,
       forward - strafe - turn, forward + strafe - turn); //order matters
}

void userDrive(){
       moveArcade(controller1.getAnalog(rightY),
               controller1.getAnalog(rightX),
               controller1.getAnalog(leftX)/turnDivisor);
}

void intakeIn(int speed){
    mtr_it_left.spin()
}