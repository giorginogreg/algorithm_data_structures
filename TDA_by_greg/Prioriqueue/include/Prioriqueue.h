//
// Created by Greg on 21/04/22.
//

#ifndef TDA_PRIORIQUEUE_H
#define TDA_PRIORIQUEUE_H

template<class T>
class Prioriqueue {

public:
    virtual void create(int) = 0;
    virtual void insert(T) = 0;
    virtual T getMinimum() = 0;
    virtual void deleteMinimum() = 0;

    int max_elems_inside;
};

#endif //TDA_PRIORIQUEUE_H
