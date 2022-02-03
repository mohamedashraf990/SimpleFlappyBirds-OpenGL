
#include <stdlib.h>
#include <cmath>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <random>

int posYQUAD = 250;
int posXQUAD=0;
int globalSetsPosX=100;
int globalSetsPosY=0;
int value=0;
int barrierOne=100;
int barrierTwo=450;
int barrierThree=750;
// i want to keep track of the location of the bird
bool setOneFlags[6];
bool setTwoFlags[6];
bool setThreeFlags[6];
int birdLocationX=0;
int lives=3;
bool flag1=false;
bool flag2=false;
bool flag3=false;
bool flag4=false;
bool flag5=false;
bool flag6=false;
bool flag7=false;
bool flag8=false;
bool flag9=false;
bool flag10=false;
bool flag11=false;
bool flag12=false;
bool flag13=false;
bool flag14=false;
bool flag15=false;
bool flag16=false;
bool flag17=false;
bool flag18=false;
bool powerUpFlag =false;
int  powerUpXdirection=0;
float mainColorR=0.0f;
float mainColorG=1.0f;
float mainColorB=0.0f;
float secondaryColorR=0.0f;
float secondaryColorG=0.0f;
float secondaryColorB=0.0f;







void generateRandomX(){
    
}



void generateRandomY(){
    
}


//

void createSetOne(){
    // First 2 Boundaries
    
    //Lower Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 250, 0);
    glVertex3d(0, 250, 0);
    glEnd();
    glPopMatrix();
    //Lower Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne-20, 250, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    
    // PowerUp
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne, 270, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(10, 0, 0);
    glVertex3d(10, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();

    //Upper Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne, 400, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 100, 0);
    glVertex3d(0, 100, 0);
    glEnd();
    glPopMatrix();
    //Upper Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne-20, 400, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();

//*********************************************************************************************************
    // Second 2 Boundaries
    
    
    //Lower Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne+100, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 200, 0);
    glVertex3d(0, 200, 0);
    glEnd();
    glPopMatrix();
    // Lower Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne+80, 200, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    
    
    
    
    //Upper Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne+100, 350, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 250, 0);
    glVertex3d(0, 250, 0);
    glEnd();
    glPopMatrix();
    // Upper Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne+80, 350, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    //***************************************************************************************************
    // Third 2 Barriers
    
    
    //Lower Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne+200, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 100, 0);
    glVertex3d(0, 100, 0);
    glEnd();
    glPopMatrix();
    // Lower Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne+180, 100, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    
    
    
    //Upper Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne+200, 300, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 250, 0);
    glVertex3d(0, 250, 0);
    glEnd();
    glPopMatrix();
    // Upper Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierOne+180, 300, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    
}



void createSetTwo(){
    // Second 2 Boundaries
    
    
    //Lower Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 150, 0);
    glVertex3d(0, 150, 0);
    glEnd();
    glPopMatrix();
    //Lower Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo-20, 150, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    

    //Upper Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo, 350, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 150, 0);
    glVertex3d(0, 150, 0);
    glEnd();
    glPopMatrix();
    //Upper Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo-20, 350, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();

    //**************************************************************************************************
    
    
    //Lower Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo+100, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 300, 0);
    glVertex3d(0, 300, 0);
    glEnd();
    glPopMatrix();
    //Lower Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo+80, 300, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    
    //Upper Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo+100, 400, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 100, 0);
    glVertex3d(0, 100, 0);
    glEnd();
    glPopMatrix();
    //Upper Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo+80, 400, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();

    //************************************************************************************************
    
    
    //Lower Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo+200, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 250, 0);
    glVertex3d(0, 250, 0);
    glEnd();
    glPopMatrix();
    //Lower Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo+180, 250, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    
    //Upper Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo+200, 400, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 100, 0);
    glVertex3d(0, 100, 0);
    glEnd();
    glPopMatrix();
    //Upper Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierTwo+180, 400, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();

    
   
}

void createSetThree(){
    
    
    //Lower Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 150, 0);
    glVertex3d(0, 150, 0);
    glEnd();
    glPopMatrix();
    //Lower Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree-20, 150, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    
    //Upper Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree, 350, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 150, 0);
    glVertex3d(0, 150, 0);
    glEnd();
    glPopMatrix();
    //Upper Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree-20, 350, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();

    //**************************************************************************************************
    
    //Lower Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree+100, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 300, 0);
    glVertex3d(0, 300, 0);
    glEnd();
    glPopMatrix();
    //Lower Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree+80, 300, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    
    //Upper Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree+100, 350, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 150, 0);
    glVertex3d(0, 150, 0);
    glEnd();
    glPopMatrix();
    //Upper Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree+80, 350, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();

    
    
    
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree+200, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 260, 0);
    glVertex3d(0, 260, 0);
    glEnd();
    glPopMatrix();
    //Lower Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree+180, 260, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();
    
    //Upper Boundary
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree+200, 375, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(30, 0, 0);
    glVertex3d(30, 125, 0);
    glVertex3d(0, 125, 0);
    glEnd();
    glPopMatrix();
    //Upper Rectangle
    glColor3f(mainColorR, mainColorG, mainColorB);
    glPushMatrix();
    glTranslated(globalSetsPosX+barrierThree+180, 375, 0);
    glBegin(GL_QUADS);
    glVertex3d(0, 0, 0);
    glVertex3d(70, 0, 0);
    glVertex3d(70, 10, 0);
    glVertex3d(0, 10, 0);
    glEnd();
    glPopMatrix();

}

void createbird() {

    glColor3f(1.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslated(10, posYQUAD, 0);


    glBegin(GL_QUADS);

    glVertex3d(0, 0, 0);

    glVertex3d(30, 0, 0);

    glVertex3d(30, 30, 0);

    glVertex3d(0, 30, 0);



    glEnd();

    glPopMatrix();

    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslated(30, posYQUAD, 0);


    glBegin(GL_TRIANGLES);

    glVertex3d(0, 0, 0);

    glVertex3d(30, 0, 0);

    glVertex3d(30, 30, 0);

   



    glEnd();

    glPopMatrix();

 
    glColor3f(0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslated(50, posYQUAD+25, 0);


    glBegin(GL_LINES);

    glVertex3d(10, 0, 0);

    glVertex3d(20, 0, 0);

   


    glEnd();

    glPopMatrix();
}

void createPowerup(){
    
}

void print(int x, int y, char* string)
{
    int len, i;

    //set the position of the text in the window using the x and y coordinates
    glRasterPos2f(x, y);

    //get the length of the string to display
    len = (int)strlen(string);

    //loop to display character by character
    for (i = 0; i < len; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    }
}

void changeColor(){
    if(powerUpXdirection<200){
    mainColorB=secondaryColorB;
    mainColorR=secondaryColorR;
    mainColorG=secondaryColorG;
    }else{
         mainColorR=0.0f;
         mainColorG=1.0f;
         mainColorB=0.0f;
    }
}

void detectCollision(){
//    if(value==1){      //1
//        // case One Three Two
//        globalSetsPosX=100;
//        createSetOne();
//        globalSetsPosX=-200;
//        createSetThree();
//        globalSetsPosX=400;
//        createSetTwo();
//
//    }else if(value==2){  //1
////         case one two three
//        createSetOne();
//        createSetTwo();
//        createSetThree();
//
//    }else if(value==3){
//        //     case two three one
//            globalSetsPosX=-350;
//            createSetTwo();
//            globalSetsPosX=-300;
//            createSetThree();
//            globalSetsPosX=650;
//            createSetOne();
//        globalSetsPosX=0;
//    }else if(value==4){
////         case two one three
//        globalSetsPosX=-250;
//        createSetTwo();
//        globalSetsPosX=450;
//        createSetOne();
//        globalSetsPosX=100;
//        createSetThree();
//
//    }else if(value==5){
//        //     three one two
//            globalSetsPosX=-550;
//            createSetThree();
//            globalSetsPosX=450;
//            createSetOne();
//            globalSetsPosX=400;
//            createSetTwo();
//
//    }else{
////        //three two one
//    globalSetsPosX=-550;
//    createSetThree();
//    globalSetsPosX=100;
//    createSetTwo();
//    globalSetsPosX=750;
//    createSetOne();
//    }
//
//
//
    // Collisions may occur in the first set
  
        if(value==1){
            //**********************************************************
            // first Barrier first set (lower)
            if( posYQUAD<=250 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag1==false && powerUpFlag!=true){
                    lives--;
                    flag1=true;
                }
                
            }
            
            if( (posYQUAD>=250 && posYQUAD<=280) && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && powerUpFlag==false){
                    powerUpFlag=true;
                    changeColor();
                }
                
            }
            // first Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=130 && posXQUAD<=160) && powerUpFlag!=true ) {
                if(lives>0 && flag2==false&& powerUpFlag!=true){
                    lives--;
                    flag2=true;
                }
                
            }
            // second Barrier first set (lower)
            if( posYQUAD<=200 && (posXQUAD>=230 && posXQUAD<=260) && powerUpFlag!=true ) {
                if(lives>0 && flag3==false&& powerUpFlag!=true){
                    lives--;
                    flag3=true;
                }
               
            }
            // second Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=230 && posXQUAD<=260) && powerUpFlag!=true) {
                if(lives>0 && flag4==false&& powerUpFlag!=true){
                    lives--;
                    flag4=true;
                }
              
            }
            // third Barrier first set (lower)
            if( posYQUAD<=100 && (posXQUAD>=330 && posXQUAD<=360) && powerUpFlag!=true) {
                if(lives>0 && flag5==false&& powerUpFlag!=true){
                    lives--;
                    flag5=true;
                }
                
            }
            // third Barrier first set (upper)
            if( posYQUAD>=300 && (posXQUAD>=330 && posXQUAD<=360) && powerUpFlag!=true) {
                if(lives>0 && flag6==false&& powerUpFlag!=true){
                    lives--;
                    flag6=true;
                }
                
            }
            //**********************************************************
            
            if( posYQUAD<=150 && (posXQUAD>=480 && posXQUAD<=510)&& powerUpFlag!=true ) {
                if(lives>0 && flag7==false&& powerUpFlag!=true){
                    lives--;
                    flag7=true;
                }
               
            }
            // first Barrier second set (upper)
            if( posYQUAD>=350 && (posXQUAD>=480 && posXQUAD<=510) && powerUpFlag!=true) {
                if(lives>0 && flag8==false&& powerUpFlag!=true){
                    lives--;
                    flag8=true;
                }
               
            }
            // second Barrier second set (lower)
            if( posYQUAD<=300 && (posXQUAD>=580 && posXQUAD<=610) && powerUpFlag!=true) {
                if(lives>0 && flag9==false&& powerUpFlag!=true){
                    lives--;
                    flag9=true;
                }
               
            }
            // second Barrier second set (upper)
            if( posYQUAD>=350 && (posXQUAD>=580 && posXQUAD<=610)&& powerUpFlag!=true ) {
                if(lives>0 && flag10==false&& powerUpFlag!=true){
                    lives--;
                    flag10=true;
                }
               
            }
            // third Barrier second set (lower)
            if( posYQUAD<=300 && (posXQUAD>=680 && posXQUAD<=710) && powerUpFlag!=true) {
                if(lives>0 && flag11==false&& powerUpFlag!=true){
                    lives--;
                    flag11=true;
                }
                
            }
            // third Barrier second set (upper)
            if( posYQUAD>=350 && (posXQUAD>=680 && posXQUAD<=710)&& powerUpFlag!=true ) {
                if(lives>0 && flag12==false&& powerUpFlag!=true){
                    lives--;
                    flag12=true;
                }
                
            }
            
            //*****************************************************
            
            if( posYQUAD<=150 && (posXQUAD>=780 && posXQUAD<=810) && powerUpFlag!=true) {
                if(lives>0 && flag13==false&& powerUpFlag!=true){
                    lives--;
                    flag13=true;
                }
                
            }
            // first Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=780 && posXQUAD<=810)&& powerUpFlag!=true ) {
                if(lives>0 && flag14==false&& powerUpFlag!=true){
                    lives--;
                    flag14=true;
                }
               
            }
            // second Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=880 && posXQUAD<=910) && powerUpFlag!=true) {
                if(lives>0 && flag15==false&& powerUpFlag!=true){
                    lives--;
                    flag15=true;
                }
               
            }
            // second Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=880 && posXQUAD<=910)&& powerUpFlag!=true ) {
                if(lives>0 && flag16==false&& powerUpFlag!=true){
                    lives--;
                    flag16=true;
                }
                
            }
            // third Barrier first set (lower)
            if( posYQUAD<=259 && (posXQUAD>=980 && posXQUAD<=1010)&& powerUpFlag!=true ) {
                if(lives>0 && flag17==false&& powerUpFlag!=true){
                    lives--;
                    flag17=true;
                }
               
            }
            // third Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=980 && posXQUAD<=1010) && powerUpFlag!=true) {
                if(lives>0 && flag18==false&& powerUpFlag!=true){
                    lives--;
                    flag18=true;
                }
             
            }
            
            
            
            
            
        }else if(value==2){
            //**********************************************************
            // first Barrier first set (lower)
            if( posYQUAD<=250 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag1==false){
                    lives--;
                    flag1=true;
                }
               
            }
            
            if( (posYQUAD>=250 && posYQUAD<=280) && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && powerUpFlag==false){
                    powerUpFlag=true;
                    changeColor();
                }
                
            }
            
            // first Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag2==false && powerUpFlag!=true){
                    lives--;
                    flag2=true;
                }
              
            }
            // second Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=230 && posXQUAD<=260) ) {
                if(lives>0 && flag3==false&& powerUpFlag!=true){
                    lives--;
                    flag3=true;
                }
                
            }
            // second Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=230 && posXQUAD<=260) ) {
                if(lives>0 && flag4==false&& powerUpFlag!=true){
                    lives--;
                    flag4=true;
                }
                
            }
            // third Barrier first set (lower)
            if( posYQUAD<=100 && (posXQUAD>=330 && posXQUAD<=360) ) {
                if(lives>0 && flag5==false&& powerUpFlag!=true){
                    lives--;
                    flag5=true;
                }
                
            }
            // third Barrier first set (upper)
            if( posYQUAD>=300 && (posXQUAD>=330 && posXQUAD<=360) ) {
                if(lives>0 && flag6==false&& powerUpFlag!=true){
                    lives--;
                    flag6=true;
                }
               
            }
            
            
            // first Barrier second set (lower)
            if( posYQUAD<=150 && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && flag7==false&& powerUpFlag!=true){
                    lives--;
                    flag7=true;
                }
               
            }
            // first Barrier second set (upper)
            if( posYQUAD>=350 && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && flag8==false&& powerUpFlag!=true){
                    lives--;
                    flag8=true;
                }
               
            }
            // second Barrier second set (lower)
            if( posYQUAD<=300 && (posXQUAD>=580 && posXQUAD<=610) ) {
                if(lives>0 && flag9==false&& powerUpFlag!=true){
                    lives--;
                    flag9=true;
                }
             
            }
            // second Barrier second set (upper)
            if( posYQUAD>=400 && (posXQUAD>=580 && posXQUAD<=610) ) {
                if(lives>0 && flag10==false&& powerUpFlag!=true){
                    lives--;
                    flag10=true;
                }
            
            }
            // third Barrier second set (lower)
            if( posYQUAD<=250 && (posXQUAD>=680 && posXQUAD<=710) ) {
                if(lives>0 && flag11==false&& powerUpFlag!=true){
                    lives--;
                    flag11=true;
                }
           
            }
            // third Barrier second set (upper)
            if( posYQUAD>=400 && (posXQUAD>=680 && posXQUAD<=710) ) {
                if(lives>0 && flag12==false&& powerUpFlag!=true){
                    lives--;
                    flag12=true;
                }
              
                
            }
            
            
            
            
            if( posYQUAD<=150 && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && flag13==false&& powerUpFlag!=true){
                    lives--;
                    flag13=true;
                }
             
            }
            // first Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && flag14==false&& powerUpFlag!=true){
                    lives--;
                    flag14=true;
                }
              
            }
            // second Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=880 && posXQUAD<=910) ) {
                if(lives>0 && flag15==false&& powerUpFlag!=true){
                    lives--;
                    flag15=true;
                }
              
            }
            // second Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=880 && posXQUAD<=910) ) {
                if(lives>0 && flag16==false&& powerUpFlag!=true){
                    lives--;
                    flag16=true;
                }
               
            }
            // third Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=980 && posXQUAD<=1010) ) {
                if(lives>0 && flag17==false&& powerUpFlag!=true){
                    lives--;
                    flag17=true;
                }
             
            }
            // third Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=980 && posXQUAD<=1010) ) {
                if(lives>0 && flag18==false&& powerUpFlag!=true){
                    lives--;
                    flag18=true;
                }
             
            }
            //**********************************************************
        }else if(value==3){
            
            if( posYQUAD<=150 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag1==false &&powerUpFlag!=true){
                    lives--;
                    flag1=true;
                }
             
            }
            // first Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag2==false){
                    lives--;
                    flag2=true;
                }
           
            }
            // second Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=230 && posXQUAD<=260) ) {
                if(lives>0 && flag3==false&&powerUpFlag!=true){
                    lives--;
                    flag3=true;
                }
           
            }
            // second Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=230 && posXQUAD<=260) ) {
                if(lives>0 && flag4==false&&powerUpFlag!=true){
                    lives--;
                    flag4=true;
                }
         
            }
            // third Barrier first set (lower)
            if( posYQUAD<=250 && (posXQUAD>=330 && posXQUAD<=360) ) {
                if(lives>0 && flag5==false&&powerUpFlag!=true){
                    lives--;
                    flag5=true;
                }
    
            }
            // third Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=330 && posXQUAD<=360) ) {
                if(lives>0 && flag6==false&&powerUpFlag!=true){
                    lives--;
                    flag6=true;
                }
   
            }
            //**********************************************************
            // first Barrier first set (lower)
            if( posYQUAD<=250 && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && flag7==false&&powerUpFlag!=true){
                    lives--;
                    flag7=true;
                }
     
            }
            if( (posYQUAD>=250 && posYQUAD<=280) && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && powerUpFlag==false&&powerUpFlag!=true){
                    powerUpFlag=true;
                    changeColor();
                }
                
            }
            // first Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && flag8==false&&powerUpFlag!=true){
                    lives--;
                    flag8=true;
                }
            }
            // second Barrier first set (lower)
            if( posYQUAD<=200 && (posXQUAD>=880 && posXQUAD<=910) ) {
                if(lives>0 && flag9==false&&powerUpFlag!=true){
                    lives--;
                    flag9=true;
                }
  
            }
            // second Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=880 && posXQUAD<=910) ) {
                if(lives>0 && flag10==false&&powerUpFlag!=true){
                    lives--;
                    flag10=true;
                }

            }
            // third Barrier first set (lower)
            if( posYQUAD<=100 && (posXQUAD>=980 && posXQUAD<=1010) ) {
                if(lives>0 && flag11==false&&powerUpFlag!=true){
                    lives--;
                    flag11=true;
                }
  
            }
            // third Barrier first set (upper)
            if( posYQUAD>=300 && (posXQUAD>=980 && posXQUAD<=1010) ) {
                if(lives>0 && flag12==false&&powerUpFlag!=true){
                    lives--;
                    flag12=true;
                }

            }
            //**********************************************************
            
            if( posYQUAD<=150 && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && flag13==false&&powerUpFlag!=true){
                    lives--;
                    flag13=true;
                }

            }
            // first Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && flag14==false&&powerUpFlag!=true){
                    lives--;
                    flag14=true;
                }

            }
            // second Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=580 && posXQUAD<=610) ) {
                if(lives>0 && flag15==false&&powerUpFlag!=true){
                    lives--;
                    flag15=true;
                }
 
            }
            // second Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=580 && posXQUAD<=610) ) {
                if(lives>0 && flag16==false&&powerUpFlag!=true){
                    lives--;
                    flag16=true;
                }
      
            }
            // third Barrier first set (lower)
            if( posYQUAD<=250 && (posXQUAD>=680 && posXQUAD<=710) ) {
                if(lives>0 && flag17==false&&powerUpFlag!=true){
                    lives--;
                    flag17=true;
                }

            }
            // third Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=680 && posXQUAD<=710) ) {
                if(lives>0 && flag18==false&&powerUpFlag!=true){
                    lives--;
                    flag18=true;
                }

            }
            
        }else if(value==4){
            // first Barrier first set (lower)
            if( posYQUAD<=150 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag1==false &&powerUpFlag!=true){
                    lives--;
                    flag1=true;
                }

            }
            // first Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag2==false&&powerUpFlag!=true){
                    lives--;
                    flag2=true;
                }

            }
            // second Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=230 && posXQUAD<=260) ) {
                if(lives>0 && flag3==false&&powerUpFlag!=true){
                    lives--;
                    flag3=true;
                }

            }
            // second Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=230 && posXQUAD<=260) ) {
                if(lives>0 && flag4==false&&powerUpFlag!=true){
                    lives--;
                    flag4=true;
                }
   
            }
            // third Barrier first set (lower)
            if( posYQUAD<=250 && (posXQUAD>=330 && posXQUAD<=360) ) {
                if(lives>0 && flag5==false&&powerUpFlag!=true){
                    lives--;
                    flag5=true;
                }
            }
            // third Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=330 && posXQUAD<=360) ) {
                if(lives>0 && flag6==false&&powerUpFlag!=true){
                    lives--;
                    flag6=true;
                }

            }
            //**********************************************************
            // first Barrier first set (lower)
            if( posYQUAD<=250 && (posXQUAD>=480 && posXQUAD<=510) ) {
                glClearColor(0.0f, 0.0f, 1.0f, 0.0f);
                if(lives>0 && flag7==false&&powerUpFlag!=true){
                    lives--;
                    flag7=true;
                }
    
            }
            
            if( (posYQUAD>=250 && posYQUAD<=280) && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && powerUpFlag==false&&powerUpFlag!=true){
                    powerUpFlag=true;
                    changeColor();
                }
                
            }
            // first Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && flag8==false&&powerUpFlag!=true){
                    lives--;
                    flag8=true;
                }

            }
            // second Barrier first set (lower)
            if( posYQUAD<=200 && (posXQUAD>=580 && posXQUAD<=610) ) {
                if(lives>0 && flag9==false&&powerUpFlag!=true){
                    lives--;
                    flag9=true;
                }

            }
            // second Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=580 && posXQUAD<=610) ) {
                if(lives>0 && flag10==false&&powerUpFlag!=true){
                    lives--;
                    flag10=true;
                }
   
            }
            // third Barrier first set (lower)
            if( posYQUAD<=100 && (posXQUAD>=680 && posXQUAD<=710) ) {
                if(lives>0 && flag11==false&&powerUpFlag!=true){
                    lives--;
                    flag11=true;
                }
  
            }
            // third Barrier first set (upper)
            if( posYQUAD>=300 && (posXQUAD>=680 && posXQUAD<=710) ) {
                if(lives>0 && flag12==false&&powerUpFlag!=true){
                    lives--;
                    flag12=true;
                }

            }
            
            if( posYQUAD<=150 && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && flag13==false&&powerUpFlag!=true){
                    lives--;
                    flag13=true;
                }

            }
            // first Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && flag14==false&&powerUpFlag!=true){
                    lives--;
                    flag14=true;
                }

            }
            // second Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=880 && posXQUAD<=910) ) {
                if(lives>0 && flag15==false&&powerUpFlag!=true){
                    lives--;
                    flag15=true;
                }

            }
            // second Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=880 && posXQUAD<=910) ) {
                if(lives>0 && flag16==false&&powerUpFlag!=true){
                    lives--;
                    flag16=true;
                }
            
            }
            // third Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=980 && posXQUAD<=1010) ) {
                if(lives>0 && flag17==false&&powerUpFlag!=true){
                    lives--;
                    flag17=true;
                }
            }
            // third Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=980 && posXQUAD<=1010) ) {
                if(lives>0 && flag18==false&&powerUpFlag!=true){
                    lives--;
                    flag18=true;
                }
           
            }
            //**********************************************************
            
        }else if(value==5){
            if( posYQUAD<=150 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag1==false&&powerUpFlag!=true){
                    lives--;
                    flag1=true;
                }
               
            }
            // first Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag2==false&&powerUpFlag!=true){
                    lives--;
                    flag2=true;
                }
            }
            // second Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=230 && posXQUAD<=260) ) {
                if(lives>0 && flag3==false&&powerUpFlag!=true){
                    lives--;
                    flag3=true;
                }
            }
            // second Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=230 && posXQUAD<=260) ) {
                if(lives>0 && flag4==false&&powerUpFlag!=true){
                    lives--;
                    flag4=true;
                }
            }
            // third Barrier first set (lower)
            if( posYQUAD<=250 && (posXQUAD>=330 && posXQUAD<=360) ) {
                if(lives>0 && flag5==false&&powerUpFlag!=true){
                    lives--;
                    flag5=true;
                }
            }
            // third Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=330 && posXQUAD<=360) ) {
                if(lives>0 && flag6==false&&powerUpFlag!=true){
                    lives--;
                    flag6=true;
                }
            }
            //**********************************************************
            
            //**********************************************************
            // first Barrier first set (lower)
            if( posYQUAD<=250 && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && flag7==false&&powerUpFlag!=true){
                    lives--;
                    flag7=true;
                }
            }
            if( (posYQUAD>=250 && posYQUAD<=280) && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && powerUpFlag==false){
                    powerUpFlag=true;
                    changeColor();
                }
                
            }
            // first Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && flag8==false&&powerUpFlag!=true){
                    lives--;
                    flag8=true;
                }
            }
            // second Barrier first set (lower)
            if( posYQUAD<=200 && (posXQUAD>=580 && posXQUAD<=610) ) {
                if(lives>0 && flag9==false&&powerUpFlag!=true){
                    lives--;
                    flag9=true;
                }
            }
            // second Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=580 && posXQUAD<=610) ) {
                if(lives>0 && flag10==false&&powerUpFlag!=true){
                    lives--;
                    flag10=true;
                }
            }
            // third Barrier first set (lower)
            if( posYQUAD<=100 && (posXQUAD>=680 && posXQUAD<=710) ) {
                if(lives>0 && flag11==false&&powerUpFlag!=true){
                    lives--;
                    flag11=true;
                }
            }
            // third Barrier first set (upper)
            if( posYQUAD>=300 && (posXQUAD>=680 && posXQUAD<=710) ) {
                if(lives>0 && flag12==false&&powerUpFlag!=true){
                    lives--;
                    flag12=true;
                }
            }
            
            
            //**********************************************************
            if( posYQUAD<=150 && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && flag13==false&&powerUpFlag!=true){
                    lives--;
                    flag13=true;
                }
            }
            // first Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && flag14==false&&powerUpFlag!=true){
                    lives--;
                    flag14=true;
                }
            }
            // second Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=880 && posXQUAD<=910) ) {
                if(lives>0 && flag15==false&&powerUpFlag!=true){
                    lives--;
                    flag15=true;
                }
            }
            // second Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=880 && posXQUAD<=910) ) {
                if(lives>0 && flag16==false&&powerUpFlag!=true){
                    lives--;
                    flag16=true;
                }
            }
            // third Barrier first set (lower)
            if( posYQUAD<=250 && (posXQUAD>=980 && posXQUAD<=1010) ) {
                if(lives>0 && flag17==false&&powerUpFlag!=true){
                    lives--;
                    flag17=true;
                }
            }
            // third Barrier first set (upper)
            if( posYQUAD>=400 && (posXQUAD>=980 && posXQUAD<=1010) ) {
                if(lives>0 && flag18==false&&powerUpFlag!=true){
                    lives--;
                    flag18=true;
                }
            }
        }else if(value==6){
            // first Barrier first set (lower)
            if( posYQUAD<=150 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag1==false&&powerUpFlag!=true){
                    lives--;
                    flag1=true;
                }
            }
            // first Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=130 && posXQUAD<=160) ) {
                if(lives>0 && flag2==false&&powerUpFlag!=true){
                    lives--;
                    flag2=true;
                }
            }
            // second Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=230 && posXQUAD<=260) ) {
                if(lives>0 && flag3==false&&powerUpFlag!=true){
                    lives--;
                    flag3=true;
                }
            }
            // second Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=230 && posXQUAD<=260) ) {
                if(lives>0 && flag4==false&&powerUpFlag!=true){
                    lives--;
                    flag4=true;
                }
            }
            // third Barrier first set (lower)
            if( posYQUAD<=300 && (posXQUAD>=330 && posXQUAD<=360) ) {
                if(lives>0 && flag5==false&&powerUpFlag!=true){
                    lives--;
                    flag5=true;
                }
            }
            // third Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=330 && posXQUAD<=360) ) {
                if(lives>0 && flag6==false&&powerUpFlag!=true){
                    lives--;
                    flag6=true;
                }
            }
            
            //**********************************************************
            //first Barrier first set (lower)
            if( posYQUAD<=150 && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && flag7==false&&powerUpFlag!=true){
                    lives--;
                    flag7=true;
                }
            }
          
            if( (posYQUAD>=250 && posYQUAD<=280) && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && powerUpFlag==false){
                    powerUpFlag=true;
                    changeColor();
                }
                
            }
            
         
            // first Barrier first set (upper)
            if( posYQUAD>=300 && (posXQUAD>=780 && posXQUAD<=810) ) {
                if(lives>0 && flag8==false&&powerUpFlag!=true){
                    lives--;
                    flag8=true;
                }
            }
        
            // second Barrier first set (lower)
            if( posYQUAD<=200 && (posXQUAD>=880 && posXQUAD<=910) ) {
                if(lives>0 && flag9==false&&powerUpFlag!=true){
                    lives--;
                    flag9=true;
                }
            }
            // second Barrier first set (upper)
            if( posYQUAD>=350 && (posXQUAD>=880 && posXQUAD<=910) ) {
                if(lives>0 && flag10==false&&powerUpFlag!=true){
                    lives--;
                    flag10=true;
                }
            }
            // third Barrier first set (lower)
            if( posYQUAD<=100 && (posXQUAD>=980 && posXQUAD<=1010) ) {
                if(lives>0 && flag11==false&&powerUpFlag!=true){
                    lives--;
                    flag11=true;
                }
            }
            // third Barrier first set (upper)
            if( posYQUAD>=300 && (posXQUAD>=980 && posXQUAD<=1010) ) {
                if(lives>0 && flag12==false&&powerUpFlag!=true){
                    lives--;
                    flag12=true;
                }
            }
            // first Barrier second set (lower)
            if( posYQUAD<=150 && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && flag13==false&&powerUpFlag!=true){
                    lives--;
                    flag13=true;
                }
            }
            // first Barrier second set (upper)
            if( posYQUAD>=350 && (posXQUAD>=480 && posXQUAD<=510) ) {
                if(lives>0 && flag14==false &&powerUpFlag!=true){
                    lives--;
                    flag14=true;
                }
            }
            // second Barrier second set (lower)
            if( posYQUAD<=300 && (posXQUAD>=580 && posXQUAD<=610) ) {
                if(lives>0 && flag15==false&&powerUpFlag!=true){
                    lives--;
                    flag15=true;
                }
            }
            // second Barrier second set (upper)
            if( posYQUAD>=400 && (posXQUAD>=580 && posXQUAD<=610) ) {
                if(lives>0 && flag16==false&&powerUpFlag!=true){
                    lives--;
                    flag16=true;
                }
            }
            // third Barrier second set (lower)
            if( posYQUAD<=250 && (posXQUAD>=680 && posXQUAD<=710) ) {
                if(lives>0 && flag17==false&&powerUpFlag!=true){
                    lives--;
                    flag17=true;
                }
            }
            // third Barrier second set (upper)
            if( posYQUAD>=400 && (posXQUAD>=680 && posXQUAD<=710) ) {
                if(lives>0 && flag18==false&&powerUpFlag!=true){
                    lives--;
                    flag18=true;
                }
            }
            
            //**********************************************************
        }
            
//
//        }else if(value==3){
//
//        }else if(value==4){
//
//        }else if(value==5){
//
//        }else if(value==6){
//
//        }
       
    
    // Coliisons may occur in the second set
    
    
  
    // Collisions may occure in the third set
}
void checkGameStatus(){
    if(posXQUAD>=1050){
        glColor3f(0, 0, 0);
        char* p0y[20];
       

        sprintf((char*)p0y, "You Won");
        print(500, 250, (char*)p0y);
        birdLocationX=0;
        posYQUAD=250;
        barrierOne=0;
        barrierTwo=0;
        barrierThree=0;
        posXQUAD=posXQUAD-5;
    }
    if(lives==0){
        glColor3f(0, 0, 0);
        char* p0x[20];


        sprintf((char*)p0x, "You Lost");
        print(250, 250, (char*)p0x);
        birdLocationX=0;
        posYQUAD=250;
       
        barrierOne=0;
        barrierTwo=0;
        barrierThree=0;
    }
}
void Display() {
    glClear(GL_COLOR_BUFFER_BIT);
    createbird();
    
//    if(value==1){
//
//        createSetOne();
//        createSetThree();
//        createSetTwo();
//    }else if (value==2){
//        createSetTwo();
//        createSetOne();
//        createSetThree();
//    }else if(value==3){
//        createSetThree();
//        createSetTwo();
//        createSetOne();
//    }else if (value==4){
//        createSetThree();
//        createSetOne();
//        createSetTwo();
//    }else if (value==5){
//        createSetTwo();
//        createSetThree();
//        createSetOne();
//    }else if(value==6){
//        createSetTwo();
//        createSetOne();
//        createSetThree();
//    }
    if(value==1){      //1
        // case One Three Two
        globalSetsPosX=100;
        createSetOne();
        globalSetsPosX=-200;
        createSetThree();
        globalSetsPosX=400;
        createSetTwo();
   
    }else if(value==2){  //1
//         case one two three
        createSetOne();
        createSetTwo();
        createSetThree();
     
    }else if(value==3){
        //     case two three one
            globalSetsPosX=-250;
            createSetTwo();
            globalSetsPosX=-200;
            createSetThree();
            globalSetsPosX=750;
            createSetOne();
        globalSetsPosX=0;
    }else if(value==4){
//         case two one three
        globalSetsPosX=-250;
        createSetTwo();
        globalSetsPosX=450;
        createSetOne();
        globalSetsPosX=100;
        createSetThree();

    }else if(value==5){
        //     three one two
            globalSetsPosX=-550;
            createSetThree();
            globalSetsPosX=450;
            createSetOne();
            globalSetsPosX=400;
            createSetTwo();
      
    }else{
//        //three two one
    globalSetsPosX=-550;
    createSetThree();
    globalSetsPosX=100;
    createSetTwo();
    globalSetsPosX=750;
    createSetOne();
    }
    
    if(powerUpXdirection>=250){
        powerUpFlag=false;
        changeColor();
    }
    
    
            glColor3f(0, 0, 0);
            char* p0y[20];
            int scoreY =posYQUAD;
    int scoreX=posXQUAD;
    
            sprintf((char*)p0y, "Your Score %d", scoreX);
            print(150, 480, (char*)p0y);
    
                char* numLives[20];
                int scoreLives =lives;

                sprintf((char*)numLives, "Lives Left %d", scoreLives);
                print(300, 480, (char*)numLives);
    
    
    
    char* powerupdir[20];
    int powerupx =powerUpXdirection;

    sprintf((char*)powerupdir, "Power up X dir %d", powerupx);
    print(650, 480, (char*)powerupdir);
                        
    detectCollision();
    checkGameStatus();
    glFlush();
}
void Timer(int val){
    posYQUAD =posYQUAD -  5;
    if(lives>0){
        posXQUAD=posXQUAD+5;
    }
   
        barrierOne=barrierOne-5;
       barrierTwo=barrierTwo-5;
    barrierThree=barrierThree-5;
    if(powerUpFlag==true){
        powerUpXdirection=powerUpXdirection+5;
    }
   
 
 
 
    glutTimerFunc(100, Timer, 0);
}

void key(int key, int mx, int my) {

    if (key == GLUT_KEY_UP) {

        posYQUAD += 20;
    }
}

void Anim(void){
    glutPostRedisplay();
}





int main(int argc, char** argr) {

    glutInit(&argc, argr);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(150, 150);

    glutCreateWindow("OpenGL - 2D Template");

    glutDisplayFunc(Display);
    glutIdleFunc(Anim);

    glutTimerFunc(1000, Timer, 0);
    
    glutSpecialFunc(key);

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

    gluOrtho2D(0.0, 500, 0.0, 500);
 
    value= rand() % 6 + 1;

    glutMainLoop();
}
