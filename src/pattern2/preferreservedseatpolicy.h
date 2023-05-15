
#ifndef PREFER_RESERVED_SEAT_POLICY_H_
#define PREFER_RESERVED_SEAT_POLICY_H_

#include "abstractpolicy.h"

namespace design_pattern
{

class PreferReservedSeatPolicy : public AbstractPolicy
{
public:
  explicit PreferReservedSeatPolicy() = default;
  virtual ~PreferReservedSeatPolicy() = default;

  virtual std::string buy(Context* pContext);
};

} // design_pattern

#endif // PREFER_RESERVED_SEAT_POLICY_H_
