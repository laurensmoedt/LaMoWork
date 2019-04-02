#include <iostream>
#include "input.h"



Input::Input()
{
	bool _buttonPressed = false;

	_window = nullptr;

	for (unsigned int i = 0; i < LastKey; i++) {
		_keys[i] = false;
	}
}

void Input::updateInput(GLFWwindow* window)
{
	_window = window;

	glfwPollEvents();

	glfwGetCursorPos(_window, &_mouseX, &_mouseY);
}

void Input::handleKey(unsigned int key) 
{
	if (glfwGetKey(_window, key) == GLFW_PRESS) {
		if (_keys[key] == false) {
			_keys[key] = true;
			std::cout << "DOWN: " << key << std::endl;
		}
	}
}