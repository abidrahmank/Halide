#ifndef HALIDE_REMOVE_EXTERN_LOOPS
#define HALIDE_REMOVE_EXTERN_LOOPS

#include "Expr.h"

/** \file
 * Defines a lowering pass that removes placeholder loops for extern stages.
 */

namespace Halide {
namespace Internal {

/** Removes placeholder loops for extern stages. */
Stmt remove_extern_loops(const Stmt &s);

}  // namespace Internal
}  // namespace Halide

#endif
