// CS370
// Lab04 - RSHexagon

#ifdef OSX
	#include <GLUT/glut.h>
#else
	#include <GL/glut.h>
#endif

// Original hexagon vertices
GLfloat u1[2] = {0.5f,0.866f};
GLfloat u2[2] = {-0.5f,0.866f};
GLfloat u3[2] = {-1.0f,0.0f};
GLfloat u4[2] = {-0.5f,-0.866f};
GLfloat u5[2] = {0.5f,-0.866f};
GLfloat u6[2] = {1.0f,0.0f};

// TODO: Compute Scaled vertices
GLfloat v1[2];
GLfloat v2[2];
GLfloat v3[2];
GLfloat v4[2];
GLfloat v5[2];
GLfloat v6[2];

/*
// TODO: Scaled/Rotated vertices
GLfloat v1[2];
GLfloat v2[2];
GLfloat v3[2];
GLfloat v4[2];
GLfloat v5[2];
GLfloat v6[2];
*/
void display();
void render_Scene();

int main(int argc, char *argv[])
{
	// Initialize GLUT
	glutInit(&argc,argv);

	// Initialize the window with double buffering and RGB colors
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	// Set the window size to 500x500 pixels
	glutInitWindowSize(500,500);

	// Create window
	glutCreateWindow("Scaled/Rotated Hexagon");

	// Define callbacks
	glutDisplayFunc(display);

	// Set background color to white
	glClearColor(1.0f,1.0f,1.0f,1.0f);

	// Begin event loop
	glutMainLoop();

	return 0;
}

// Display callback
void display()
{
	// Reset background
	glClear(GL_COLOR_BUFFER_BIT);

	// Render scene
	render_Scene();

	// Flush buffer
	glFlush();

	// Swap buffers
	glutSwapBuffers();
}

// Scene render function
void render_Scene()
{
	// TODO: Draw green computed hexagon vertices
	glColor3f(0.0f,1.0f,0.0f);

	// Set transformations
	// TODO: Rotate 60 degrees about z-axis

	// TODO: Scale .5 in x, .75 in y (note preserve z)

	// TODO: Draw red hexagon (transformed)
	glColor3f(1.0f,0.0f,0.0f);

}
