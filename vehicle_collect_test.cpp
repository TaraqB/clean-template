#include <gtest/gtest.h>

TEST(COLLECT,when_vehicle_reports_measurement_fetch_and_store){
 
 ASSERT_EQ(get_vehicle_measurements({vehicleId,measuremntKey,batteryPc}),EN_DATA_AVAILABLE);
}

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
