#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
private:
    int width, height;
public:
    void set_values(int new_width, int new_height){
        width = new_width;
        height = new_height;
    }
    int return_square(){
        return width * height;
    }
};

#endif // RECTANGLE_H
