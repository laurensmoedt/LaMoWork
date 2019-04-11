/*
 * Entity class - LamoEngine 2D OpenGL framework.
 *
 */

#include <iostream>

#include "entity.h"


int Entity::_nextGuid = 0;

Entity::Entity()
{
	_guid = _nextGuid;
	_nextGuid++;

	_sprite = nullptr;
	_parent = nullptr;
	
	position = glm::vec3(0.0f, 0.0f, 0.0f);
	scale = glm::vec3(1.0f, 1.0f, 1.0f);
	rotation = float(0.0f);

}

Entity::~Entity()
{
	removeSprite();
}

void Entity::addSprite(const std::string& image_path)
{
	removeSprite();
	Sprite* sprite = new Sprite(image_path);
	_sprite = sprite;
	
}

void Entity::addChild(Entity* child)
{
	if (child->_parent != nullptr) {
		child->_parent->removeChild(child);
	}
	child->_parent = this;
	this->_children.push_back(child);
}

void Entity::removeChild(Entity* child)
{
	std::vector< Entity* >::iterator it = _children.begin();
	while (it != _children.end()) {
		if ((*it)->_guid == child->_guid) {
			child->_parent = nullptr;
			it = _children.erase(it);
		}
		else {
			++it;
		}
	}
}
