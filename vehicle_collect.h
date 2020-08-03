typedef enum measure
{
  motor_temp,
  battery_pc,
  battery_temp,
}

typedef struct telematics
{
  int vehicle_id;
  measure type;
  float measurement;
}

typedefstruct inventory
{
  int vehicle_id;
  float motor_temp;
  float battery_temp;
};
