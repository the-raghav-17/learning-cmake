# ========== Operations ========== #

add_library(operations
	STATIC
		operations/add.cpp
		operations/subtract.cpp
		operations/multiply.cpp
		operations/divide.cpp
)
target_include_directories(operations
	PUBLIC
		../include
)

# ========== Calculator ========== #

add_library(calculator
	STATIC
		calculator.cpp
)
target_include_directories(calculator
	PUBLIC
		../include
)
target_link_libraries(calculator
	PRIVATE
		operations
)

# ========== Main executable ========== #

add_executable(main main.cpp)
target_link_libraries(main
	PRIVATE
		calculator
)
