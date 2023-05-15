
#ifndef NECESSARY_RESERVED_SEAT_POLICY_H_
#define NECESSARY_RESERVED_SEAT_POLICY_H_

#include "abstractpolicy.h"

namespace design_pattern
{

class NecessaryReservedSeatPolicy : public AbstractPolicy
{
public:
  explicit NecessaryReservedSeatPolicy() = default;
  virtual ~NecessaryReservedSeatPolicy() = default;

  virtual std::string buy(Context* pContext);
};

} // design_pattern

#endif // PREFER_RESERVED_SEAT_POLICY_H_
