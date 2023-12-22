// SPDX-FileCopyrightText: 2023 The dune-iga developers mueller@ibb.uni-stuttgart.de
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "config.h"

#include <dune/maxent/maxent.hh>
#include <dune/common/parametertreeparser.hh>

int main(int argc, char **argv) {
  std::cout << "Hello this is dune-maxent" << std::endl;
  using namespace Dune::MaxEnt;
  MaxEnt me1{};
  return 0;
}
