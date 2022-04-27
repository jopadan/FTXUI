#include <gtest/gtest-message.h>  // for Message
#include <gtest/gtest-test-part.h>  // for SuiteApiResolver, TestFactoryImpl, TestPartResult
#include "gtest/gtest_pred_impl.h"       // for Test, EXPECT_EQ, TEST
#include <string>                   // for allocator
#include "ftxui/dom/elements.hpp"        // for text, flexbox
#include "ftxui/screen/screen.hpp"       // for Screen

namespace ftxui {

TEST(SpinnerTest, Spinner1) {
  auto element = spinner(1, 0);
  Screen screen(4, 1);
  Render(screen, element);
  EXPECT_EQ(screen.ToString(), ".   ");
}

TEST(SpinnerTest, Spinner2) {
  auto element = spinner(1, 1);
  Screen screen(4, 1);
  Render(screen, element);
  EXPECT_EQ(screen.ToString(), "..  ");
}

TEST(SpinnerTest, Spinner3) {
  auto element = spinner(1, 2);
  Screen screen(4, 1);
  Render(screen, element);
  EXPECT_EQ(screen.ToString(), "... ");
}

TEST(SpinnerTest, Spinner4) {
  auto element = spinner(1, 3);
  Screen screen(4, 1);
  Render(screen, element);
  EXPECT_EQ(screen.ToString(), ".   ");
}

} // namespace ftxui

// Copyright 2022 Arthur Sonzogni. All rights reserved.
// Use of this source code is governed by the MIT license that can be found in
// the LICENSE file.
