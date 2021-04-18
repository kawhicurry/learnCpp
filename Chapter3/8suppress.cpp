

class Shape {
public:
    Shape(const Shape &) = delete;  // no copy operations
    Shape &operator=(const Shape &) = delete;

    Shape(Shape &&) = delete;//no move operations
    Shape &operator=(Shape &&) = delete;

    ~Shape( );
};