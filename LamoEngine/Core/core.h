#ifndef CORE_H
#define CORE_H

// Include standard headers
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <LamoEngine/Renderer/renderer.h>
#include <LamoEngine/Renderer/scene.h>
#include <LamoEngine/Core/input.h>
#include <LamoEngine/Core/scenemanager.h>

class Core
{
public:
	Core();
	virtual ~Core();

	void activate(Scene* scene, Renderer* renderer);

private:
	Input* input;
	
};
#endif

