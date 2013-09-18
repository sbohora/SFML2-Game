#pragma once
#ifndef TECH_DEMO_CONTROLLER_HPP
#define TECH_DEMO_CONTROLLER_HPP


#include "../../Engine/Includes.hpp"


class TechDemo : public GameBase
{
	public:
		TechDemo();
		~TechDemo();

	private:
		void onTick();
		void onRender();
		void onKeyDown(int keyCode);
		void onMouseMotion(sf::Vector2i mousePosition);
		void onMouseDown(sf::Mouse::Button mouseButton);
		void onQuit();

		TileMap* m_tileMap;
};


typedef std::shared_ptr<TechDemo> TechDemoPtr;


#endif // TECH_DEMO_CONTROLLER_HPP
