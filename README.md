# GJK algorithm for C++/SFML

For explanation how it works go to the original page.

## Example
```c++


//function to get rect of some object
sf::Rect<float> get_rect(const Vector2f& pos, const Vector2f& size)
{
    Rect<float> rect;
    rect.top = pos.y;
    rect.left= pos.x;
    rect.width = size.x;
    rect.height= size.y
    
    return rect;
}

//So to check does some object collide another one you simply do
#include"CollisionChecker.h"

int main()
{
    //here defined objects
    
    auto rect1 = get_rect(object1->getPosition(),object1->getSize());
    auto rect2 = get_rect(object2->getPosition(),object2->getSize());
    
    if(CollisionChecker::does_collides(rect1, rect2))
    {
        //do something you need
    }

    return 0;
}

```
