#include <gl/glut.h>    //include glut library (automatically includes gl and glu libraries)

//set up states that are going to be used
void init()
{
  glClearColor(1.0, 1.0, 1.0, 1.0); //set clear background colour to white
}

//draw the scene here
void drawScene()
{
  glClear(GL_COLOR_BUFFER_BIT);  //clear the colour buffer to the colour previously set in glClearColor 

  glBegin(GL_POLYGON);		     //set primitive type
    glColor3f(1.0f, 0.0f, 0.0f); //set colour
    //define vertices
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(0.5f, -0.5f);
  glEnd();

  glFlush();
}

int main(int argc, char* argv[])
{
  glutInitDisplayMode(GLUT_RGB);      //requests properties for the window (sets up the rendering context)
  glutInitWindowSize(512, 512);		  //set window size in pixels
  glutInitWindowPosition(0, 0);       //set window position from top-left corner of display
  glutCreateWindow("Primitives");     //set window title
  init();					          //call function to setup states 
  glutDisplayFunc(drawScene);	      //register display callback function

  glutMainLoop();                     //enter event loop
}
