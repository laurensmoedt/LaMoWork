#include <iostream>
#include "input.h"



Input* Input::instance = nullptr;
Input* Input::getInstance() {
	if (instance == nullptr) {
		std::cout << "Instance made!" << std::endl;
		instance = new Input();
	}
	return instance;
}

Input::Input()
{
	_window = nullptr;

	for (unsigned int i = 0; i < LastKey; i++) {
		_keys[i] = false;
	}
}

void Input::init(GLFWwindow* window)
{
	Input::getInstance()->_window = window;
}

void Input::updateInput()
{
	glfwPollEvents();

	for (unsigned int i = 32; i < LastKey; i++) {
		handleKey(i);
	}
}

bool Input::getKey(int keycode)
{
	return Input::getInstance()->_keys[keycode];
}

void Input::handleKey(unsigned int key) 
{
	if (glfwGetKey(_window, key) == GLFW_PRESS) {
		if (_keys[key] == false) {
			Input::getInstance()->_keys[key] = true;
			std::cout << "Pressed: " << key << std::endl;
		}
		else if (glfwGetKey(_window, key) == GLFW_RELEASE) {
			Input::getInstance()->_keys[key] = false;
			std::cout << "released: " << key << std::endl;
		}
	}
}