/*
 * test.cpp
 *
 *  Created on: Sep 24, 2019
 *      Author: gautam
 */

/**
 * @Author Gautam Balachandran
 * @file test.cpp
 * @brief PID controller class testing
 *
 */
#include <gtest/gtest.h>
#include "../include/pid_controller.hpp"

/**
 * @brief Test case that checks if the computed value is correct
 */
TEST(PIDControllerTest, CheckValuePass) {
  PIDController pidController;
  double expectPass = 140.14;
  double val = pidController.computeVelocity(10.0,24.3);
  EXPECT_NEAR(expectPass,val,0.01);// Should Pass
}

/**
 * @brief Test case that checks if the computed value is different
 */
// TEST(PIDControllerTest, CheckValueFail) {
//   PIDController pidController;
//   double expectFail = 140;
//   double val = pidController.computeVelocity(10.0,24.3);
//   EXPECT_NEAR(expectFail,val,0.01);// Should fail
// }

/**
 * @brief Test case to check if the computed value is type double
 */
TEST(PIDControllerTest, checkDoublePass) {
  PIDController pidController;
  double val = pidController.computeVelocity(10.0,24.3);
  // For Pass check
  EXPECT_EQ(typeid(val), typeid(double));
}

/**
 * @brief Test case to check if the computed value is not type int
 */
// TEST(PIDControllerTest, checkDoubleFail) {
//   PIDController pidController;
//   double val = pidController.computeVelocity(10.0,24.3);
//   // For failure check
//   EXPECT_EQ(typeid(val), typeid(int));
// }
