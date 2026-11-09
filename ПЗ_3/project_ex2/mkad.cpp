#include "MkadRider.h"

MkadRider::MkadRider(int v, int t) : velocity(v), time(t) {}

void MkadRider::setMotionData(int v, int t) {
    velocity = v;
    time = t;
}

int MkadRider::calculatePosition() const {
    int pos = (velocity * time) % ROAD_LENGTH;
    if (pos < 0) {
        pos += ROAD_LENGTH;
    }
    return pos;
}
