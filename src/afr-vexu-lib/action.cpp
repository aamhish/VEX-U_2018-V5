#include "afr-vexu-lib/action.h"

AFR::VexU::action::action(const scheduled_update_t& update_period, AFR::VexU::commandable& commandable, error_t* result)
        : scheduled(
        update_period), commandable_(commandable){
    if(result != nullptr){
        *result = SUCCESS;
    }
}