#include "input.h"



Input::Input()
{
	_window = nullptr;
}


Input::~Input()
{

}

void Input::update(GLFWwindow* window) 
{
	_window = window;
	glfwPollEvents();

	glfwGetCursorPos(_window, &_mouseX, &_mouseY);
}