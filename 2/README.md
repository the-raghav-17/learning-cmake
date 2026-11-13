We can either simply create an executable by running `add_executable(main main.cpp operations.cpp operations.h)` or we can first create a different target out of `operations` and then link them to the main executable:

```
add_library(Module_operations
	OBJECT
		operations.cpp
		operations.h
)

add_executable(main main.cpp)

target_link_libraries(main Module_operations)
```

The advantage of second method is that it provides more control. We can have more customization over how `Module_operations` is built by using various compiler and CMake flags and options.