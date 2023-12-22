#ifndef DUNE_MAXENT_HH
#define DUNE_MAXENT_HH

// add your classes here
#include <array>
#include <iterator>
#include <limits>
#include <numeric>
#include <ranges>
#include <set>
#include <vector>
#include <iostream>
#include <concepts>
#include <string>

#include <dune/common/diagonalmatrix.hh>
#include <dune/common/dynmatrix.hh>
#include <dune/functions/functionspacebases/defaultglobalbasis.hh>
#include <dune/functions/functionspacebases/flatmultiindex.hh>
#include <dune/functions/functionspacebases/nodes.hh>
#include <dune/geometry/type.hh>
#include <dune/grid/common/rangegenerators.hh>
#include <dune/localfunctions/common/localbasis.hh>
#include <dune/localfunctions/common/localfiniteelementtraits.hh>
#include <dune/localfunctions/common/localkey.hh>

namespace Dune::MaxEnt
{
    class MaxEnt
    {
    public:
        MaxEnt() { std::cout << "Hello MaxEnt Class" << std::endl; }
    };
} // nampespace Dune::MaxEnt

#endif // DUNE_MAXENT_HH
