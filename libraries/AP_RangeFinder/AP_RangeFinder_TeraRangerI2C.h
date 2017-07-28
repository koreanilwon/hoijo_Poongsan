#pragma once

#include "RangeFinder.h"
#include "RangeFinder_Backend.h"
#include <AP_HAL/I2CDevice.h>

class AP_RangeFinder_TeraRangerI2C : public AP_RangeFinder_Backend
{
public:
    // static detection function
    static AP_RangeFinder_Backend *detect(uint8_t bus,
                                          RangeFinder::RangeFinder_State &_state);

    // update state
    void update(void);

protected:

    virtual MAV_DISTANCE_SENSOR _get_mav_distance_sensor_type() const override {
        return MAV_DISTANCE_SENSOR_LASER;
    }

private:
    // constructor
    AP_RangeFinder_TeraRangerI2C(uint8_t bus, RangeFinder::RangeFinder_State &_state);

    bool measure(void);
    bool collect(uint16_t &distance_cm);
    
    bool init(void);    
    void timer(void);
    AP_HAL::OwnPtr<AP_HAL::I2CDevice> dev;

    struct {
        uint32_t sum;
        uint32_t count;
    } accum;
};