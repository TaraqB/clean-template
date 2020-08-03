#include "vehicle_collect.h"

st_inventory telematics_to_inventory(st_telematics* obj_telematics)
{
  st_inventory st_inventory;
  
  st_inventory.vehicle_id = obj_telematics->vehicle_id;
  
  switch(obj_telematics->type)
  {
    case motor_temp:
      st_inventory->motor_temp = obj_telematics->measurement;
      break;
    case battery_pc:
      st_inventory->battery_temp = obj_telematics->measurement;
      break;
    case battery_temp:
      st_inventory->battery_pc = obj_telematics->measurement;
      break;
    default:break;
  }
  
  return st_inventory;
}
