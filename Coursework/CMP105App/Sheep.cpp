#include "Sheep.h"

Sheep::Sheep()
{
	for (int i = 0; i < 4; i++)
	{
		m_walkDown.addFrame(sf::IntRect({ i * 64, 0 }, { 64, 64 }));
	}
	m_walkDown.setLooping(true);
	m_walkDown.setFrameSpeed(1.f / 4.f);
	m_currentAnimation = &m_walkDown;
	setTextureRect(m_currentAnimation->getCurrentFrame());
}

void Sheep::update(float dt)
{
	m_currentAnimation->animate(dt);
	setTextureRect(m_currentAnimation->getCurrentFrame());
}

void Sheep::handleInput(float dt)
{
}