#include <iostream>
#include "input.h"



Input::Input()
{
	bool _buttonPressed = false;
	bool _keyPressed = false;

	_window = nullptr;

	for (unsigned int i = 0; i < GLFW_KEY_LAST; i++) {
		_keys[i] = false;
	}
}

void Input::updateInput(GLFWwindow* window)
{
	
	glfwGetKey(_window, GLFW_KEY_E);
	_window = window;
	glfwPollEvents();

	glfwGetCursorPos(_window, &_mouseX, &_mouseY);
}