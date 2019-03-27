#ifndef CORE_H
#define CORE_H

// Include standard headers
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <LamoEngine/renderer.h>
#include <LamoEngine/scene.h>
#include <LamoEngine/entity.h>

class Core
{
public:
	Core();
	virtual ~Core();

	void activate(Scene* scene, Renderer* renderer);

private:

};
#endif /* CORE_H */

