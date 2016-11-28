#include "DrawingLibrary.hpp"
#include "PicturesLibrary.hpp"

// define here classes which adapt DrawingLibrary::Rectangle class to PicturesLibrary specific classes

class AdapterRectangle : public PicturesLibrary::Rectangle
{
public:
    AdapterRectangle(DrawingLibrary::Rectangle apteeRectangle);
};


class AdapterSquare : public PicturesLibrary::Square
{
public:
//    AdapterSquare(DrawingLibrary::)
};
