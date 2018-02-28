//
// Created by korstefan14 on 2/28/18.
//

#ifndef PROG3LERNEN_TEST_H
#define PROG3LERNEN_TEST_H


class test {
    int x;
    int y;
public:
    test(int x);

    test();

    test(int x, int y);

    virtual ~test();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

};

test::~test() {

}


#endif //PROG3LERNEN_TEST_H
