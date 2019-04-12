add_library(freedom
        include/freedom/freedom.h
        src/freedom.c)
target_include_directories(freedom PRIVATE include)