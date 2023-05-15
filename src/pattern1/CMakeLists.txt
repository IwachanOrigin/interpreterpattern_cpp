
project(pattern1 CXX)

set(MAIN_SRC
  context.h
  main.cpp
  policy.cpp
  policy.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

