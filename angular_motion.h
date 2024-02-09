#ifndef LINEAR_CYCLE_H
#define LINEAR_CYCLE_H

#include <iostream>
#include <iomanip>
#include <cmath>

class angular_motion
{
public:
    angular_motion();

    void set_debug(bool state);

    void set_values(double linear_velocity_max,
                    double arc_velocity,
                    double arc_radius);

    double calculateLinearArcSpeed(double radius);

    void perform_unit_test();

private:

    bool debug=0;
    double vm=0;
    double v_arc=0;
    double r_arc=0;
    double v_angular=0;

    void calculateAngularSpeed();

    double mm_s_to_mm_min(double mm_s);
    double mm_min_to_mm_s(double mm_min);

    double rad_to_deg(double radians);
};

#endif // LINEAR_CYCLE_H
