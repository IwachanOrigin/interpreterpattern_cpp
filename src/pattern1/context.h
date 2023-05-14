
#ifndef CONTEXT_H_
#define CONTEXT_H_

namespace design_pattern
{

class Context
{
public:
  ~Context() = default;

  bool isReservedSeatAvailable() { return m_reservedSeatAvailable; }
  static Context* createReservedSeatAvailable() { return new Context(true); }
  static Context* createReservedSeatUnavailable() { return new Context(false); }

private:
  bool m_reservedSeatAvailable;
  explicit Context(const bool reservedSeatAvailable) : m_reservedSeatAvailable(reservedSeatAvailable) {}
};

} // design_pattern

#endif // CONTEXT_H_
