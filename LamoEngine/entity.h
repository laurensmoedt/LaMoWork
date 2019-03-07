#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <string>

#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/matrix_decompose.hpp>

#include <LamoEngine/sprite.h>



class Entity 
{

public:
	Entity();
	virtual ~Entity();

	Sprite* _sprite;

	Sprite* sprite(std::string image_path) { return _sprite; };
	void addSprite(Sprite* sprite);
	

private:

	void removeSprite() {
		if (_sprite != nullptr) {
			delete _sprite;
			_sprite = nullptr;
		}
	};
};
#endif /* ENTITY_H */
