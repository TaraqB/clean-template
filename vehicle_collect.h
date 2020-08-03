enum en_measure
{
  motor_temp,
  battery_pc,
  battery_temp,
};

struct st_telematics
{
  int vehicle_id;
  en_measure type;
  float measurement;
};

struct st_inventory
{
  int vehicle_id;
  float motor_temp;
  float battery_temp;
  float battery_pc;
};

st_inventory telematics_to_inventory(st_telematics* obj_telematics);
