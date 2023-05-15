
project(pattern2 CXX)

set(MAIN_SRC
  abstractpolicy.h
  abstractpolicy.cpp
  context.h
  main.cpp
  necessaryreservedseatpolicy.h
  necessaryreservedseatpolicy.cpp
  preferreservedseatpolicy.h
  preferreservedseatpolicy.cpp
  preferunreservedseatpolicy.h
  preferunreservedseatpolicy.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

