#include <iostream>
#include "input.h"



Input::Input()
{
	bool _buttonPressed = false;
	bool _keyPressed = false;

	_window = nullptr;
}

void Input::updateInput(GLFWwindow* window)
{
	
	glfwGetKey(_window, GLFW_KEY_E);
	_window = window;
	glfwPollEvents();

	glfwGetCursorPos(_window, &_mouseX, &_mouseY);
}