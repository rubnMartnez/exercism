#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

bool connection_check(const pillar_men_sensor* sensor){
    return sensor != nullptr;
}
int activity_counter(pillar_men_sensor sensor_array[], int capacity){
    if (sensor_array) return capacity;
    return 0;
}
bool alarm_control(const pillar_men_sensor* sensor){
    return sensor != nullptr;
}
bool uv_alarm(const pillar_men_sensor* sensor){
    return sensor != nullptr;
}

}  // namespace speedywagon

