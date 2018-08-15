set (LIB_NAME greeting)

file (GLOB LIB_SRCS *.c)
add_library (${LIB_NAME} SHARED ${LIB_SRCS})
