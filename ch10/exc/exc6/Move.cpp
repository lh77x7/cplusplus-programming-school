#include "Move.h"

Move::Move(double a, double b): x(a), y(b) {}
void Move::showmove() const {
    cout << "\nx = " << x << ", y = " << y << "\n";

}

Move Move::add(const Move & m) const {
    Move Object;
    Object.x += m.x;
    Object.y += m.y;
    return Object;
}

void Move::reset(double a, double b){
    x = a, y = b;
}