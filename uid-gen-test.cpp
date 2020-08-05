#include "uidgen.h"

#include <string>
#include <gtest/gtest.h>

TEST(UID, UID_is_generated_within_length_limit) {
  std::string uid = uidgen();
  std::cout<<uid.length();
  ASSERT_TRUE(uid.length() > 0);
}

// TEST(UID, UID_is_generated_split_if_more_than_5_digits) {
//   std::string uid = uidgen();
//   uid = uid_split(uid);
//   ASSERT_TRUE(uid.length() > 0);
// }


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
