#include <gtest/gtest.h>
#include "vehicle_collect.h"

TEST(COLLECT,when_vehicle_reports_measurement_fetch_and_store){
 
 st_telematics obj_telematics = {231,motor_temp,30};
 st_inventory obj_inventory   = telematics_to_inventory(&obj_telematics);
 
 ASSER_EQ(obj_inventory.motor_temp,30);
 
  
 //ASSERT_EQ(get_vehicle_measurements({vehicleId,measuremntKey,batteryPc}),EN_DATA_AVAILABLE);
}

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
