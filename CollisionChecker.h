#ifndef COLLISION_CHECKER_H
#define COLLISION_CHECKER_H
#include"gjk.h"
#include"SFML/Graphics/Rect.hpp"
namespace CollisionChecker
{

bool does_collides(const sf::Rect<float>& a, const sf::Rect<float>& b)
{
	//yeah, it look awful, but it's needed to use this damned cool C library
	vec2 a_p1 = { a.left,a.top };
	vec2 a_p2 = { a.left + a.width,a.top };
	vec2 a_p3 = { a.left,a.top + a.height };
	vec2 a_p4 = { a.left + a.width,a.top+a.height };

	vec2 b_p1 = { b.left,b.top };
	vec2 b_p2 = { b.left + b.width,b.top };
	vec2 b_p3 = { b.left,b.top + b.height };
	vec2 b_p4 = { b.left + b.width,b.top + b.height };

	vec2 vertices1[] = { a_p1,a_p2,a_p3,a_p4 };
	vec2 vertices2[] = { b_p1,b_p2,b_p3,b_p4 };

	size_t count1 = sizeof(vertices1) / sizeof(vec2); 
	size_t count2 = sizeof(vertices2) / sizeof(vec2); 

	return gjk(vertices1, count1, vertices2, count2);
}
};
#endif COLLISION_CHECKER_H