/*
 * Entity class - LamoEngine 2D OpenGL framework.
 *
 */

#include <iostream>

#include <LamoEngine/entity.h>

Entity::Entity(){

	_sprite = nullptr;
};

Entity::~Entity(){

};

void Entity::addSprite(Sprite* sprite) {
	
	*_sprite = *sprite;
}