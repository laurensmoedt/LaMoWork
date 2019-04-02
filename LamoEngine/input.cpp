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

void Input::updateInput(GLFWwindow* win)
{
	_window = win;
	glfwPollEvents();


	for (unsigned int i = 32; i < 97; i++) {
		_handleKey(i);
	}
	// Func + arrows + esc, etc
	for (unsigned int i = 255; i < GLFW_KEY_LAST; i++) {
		_handleKey(i);
	}

	glfwGetCursorPos(_window, &_mouseX, &_mouseY);
}

void Input::_handleKey(unsigned int key) 
{
	if (glfwGetKey(_window, key) == GLFW_PRESS) {
		if (_keys[key] == false) {
			_keys[key] = true;
			std::cout << "DOWN: " << key << std::endl;
		}
	}
}