#pragma once
#ifndef MARKER_ST
#define MARKER_ST

class marker_st {
private:
    double x, y;
    int status, id, truenum;

public:
    double getx() { return x; }
    double gety() { return y; }

    int getStatus() { return status; }
    int getID() { return id; }
    int getTruenum() { return truenum; }
    void setStatus(int _s) { this->status = _s; }
    void setId(int _id) { this->id = _id; }
    void setTruenum(int _num) { this->truenum = _num; }
    void setPos(double _x, double _y) {
        this->x = _x;
        this->y = _y;
    }
};

#endif