
#ifndef ABSTRACT_POLICY_H_
#define ABSTRACT_POLICY_H_

#include <string>
#include "context.h"

namespace design_pattern
{

class AbstractPolicy
{
public:
  explicit AbstractPolicy() = default;
  virtual ~AbstractPolicy() = default;

  virtual std::string buy(Context* pContext) = 0;

  static AbstractPolicy* preferReservedSeat();
  static AbstractPolicy* necessaryReservedSeat();
  static AbstractPolicy* preferUnreservedSeat();
};

} // design_pattern

#endif // ABSTRACT_POLICY_H_
