#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <thread>
#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Circle.hpp"

using namespace std;

using  Collection = vector<Shape*>;

constexpr auto sortByArea(Shape* first, Shape* second)
{
    if(first != nullptr &&  second != nullptr)
    {
        return (first->getArea() < second->getArea());
    }
    return false;
}

constexpr auto perimeterBiggerThan20(Shape* s)
{
    if(s)
    {
        return (s->getPerimeter() > 20);
    }
    return false;
}

constexpr auto areaLessThan10(Shape* s)
{
    if(s)
    {
        return (s->getArea() < 10);
    }
    return false;
}

auto printCollectionElements(const Collection& collection)
{
//    for(Collection::const_iterator it = collection.begin(); it != collection.end(); ++it)
//    {
//        if(*it != nullptr)
//        {
//            (*it)->print();
//        }
//    }
    for(const auto& it: collection)
    {
        if(it != nullptr)
        {
            (it)->print();
        }
    }
}

auto printArea(std::string name, double area)
{
    std::cout << "thread_id: " << std::this_thread::get_id() << " - " << name << ": " << area << std::endl;
}

auto printAreas(const Collection& collection)
{
    std::vector<std::thread> threads;
//    for(vector<Shape*>::const_iterator it = collection.begin(); it != collection.end(); ++it)
//    {
//        if(*it != nullptr)
//        {
//            std::thread th(printArea, (*it)->getName(), (*it)->getArea());
//            threads.push_back(std::move(th));
//        }
//    }
    for(const auto & it: collection)
    {
        if(it != nullptr)
        {
            std::thread th(printArea, (it)->getName(), (it)->getArea());
            threads.push_back(std::move(th));
        }
    }
//    for(unsigned int i = 0; i < threads.size(); i++)
//    {
//        threads[i].join();
//    }
    for(auto& ithread : threads){
        ithread.join();
    }
//    for(std::thread mthread: threads) // error use of deleted function std::thread::(...)
//    {
//        mthread.join();
//    }
}

auto findFirstShapeMatchingPredicate(const Collection& collection,
                                     bool (*predicate)(Shape* s),
                                     std::string info)
{
//    Collection::const_iterator iter = std::find_if(collection.begin(), collection.end(), predicate);
    auto iter = std::find_if(collection.begin(), collection.end(), predicate);
    if(*iter != nullptr)
    {
        cout << std::endl << "First shape matching predicate: " << info << endl;
        (*iter)->print();
    }
    else
    {
        cout << std::endl << "There is no shape matching predicate " << info << endl;
    }
}


class BlockingQueue
{
public:
    auto push(Shape* shape)
    {
        // TODO
    }

    Shape* pop()
    {
        // TODO
        return nullptr;
    }
};

BlockingQueue g_queue;

auto runQueue()
{
    constexpr auto running = true;
    while(running)
    {
        auto * shape = g_queue.pop();
        if(shape == nullptr)
        {
            std::cout << "Queue received nullptr, finishing loop" << std::endl;
            break;
        }
        else
        {
            std::cout << "Shape on queue: " << shape->getName() << std::endl;
        }
    }
}

auto pushShapesToQueue(Collection const& shapes)
{
//    for(int i = 0; i < shapes.size(); ++i)
//    {
//        g_queue.push(shapes[i]);
//    }
    for(auto shape: shapes){
        g_queue.push(shape);
    }
}

int main()
{
    unique_ptr<Circle> cir(new Circle(2.0, Colors::BLUE));
    std::cout << sizeof(cir) << std::endl;
    std::cout << alignof(cir) << std::endl;
    std::cout << (cir)->getPi() << std::endl;


    alignas(64) double   a;

    a = 2342.2133213;
    std::cout << alignof(a) <<"  " << a<< std::endl;


//    Collection shapes;
//    shapes.push_back(new Circle(2.0, Colors::BLUE));
//    shapes.push_back(new Circle(3.0, Colors::BLUE));
//    shapes.push_back(nullptr);
//    shapes.push_back(new Circle(4.0, Colors::BLUE));
//    shapes.push_back(new Rectangle(10.0, 5.0, Colors::BLUE));
//    shapes.push_back(new Square(3.0, Colors::BLUE));
//    shapes.push_back(new Circle(4.0, Colors::BLUE));

    Collection shapes{
        new Circle(2.0, Colors::BLUE),
        new Circle(3.0, Colors::BLUE),
        nullptr,
        new Circle(4.0, Colors::BLUE),
        new Rectangle(10.0, 5.0, Colors::BLUE),
        new Square(3.0, Colors::BLUE),
        new Circle(4.0, Colors::BLUE)};

    printCollectionElements(shapes);

    cout << std::endl << "Areas before sort: " << std::endl;
    printAreas(shapes);

    std::sort(shapes.begin(), shapes.end(), sortByArea);

    cout << std::endl << "Areas after sort: " << std::endl;
    printAreas(shapes);

    auto square = new Square(4.0, Colors::BLUE);

    findFirstShapeMatchingPredicate(shapes, perimeterBiggerThan20, "perimeter bigger than 20");
    findFirstShapeMatchingPredicate(shapes, areaLessThan10, "area less than 10");

    std::thread queueThread(runQueue);
    pushShapesToQueue(shapes);

    queueThread.join();

    return 0;
}

