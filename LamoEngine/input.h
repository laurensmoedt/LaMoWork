#ifndef INPUT_H
#define INPUT_H

#include <glfw3.h>

class Input
{
public:
	Input();
	virtual ~Input();
	void update(GLFWwindow* window);

	double getMouseX() { return _mouseX; }
	double getMouseY() { return _mouseY; }

private:
	GLFWwindow* _window;

	double _mouseX;
	double _mouseY;
};
#endif 

