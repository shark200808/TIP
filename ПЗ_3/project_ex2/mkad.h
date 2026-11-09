#ifndef MKAD_RIDER_H
#define MKAD_RIDER_H

class MkadRider {
private:
    static const int ROAD_LENGTH = 109;
    int velocity;
    int time;

public:
    MkadRider(int v = 0, int t = 0);
    void setMotionData(int v, int t);
    int calculatePosition() const;
};

#endif // MKAD_RIDER_H
