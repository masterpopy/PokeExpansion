cmake_minimum_required(VERSION 3.23)
project(PokeExpansion C)

set(CMAKE_C_STANDARD 11)

include_directories(src)
include_directories(src/include)
ADD_DEFINITIONS(-D__INTELLISENSE__)
add_subdirectory(POKEMON-EMERALD-G9-PROJECT)
add_executable(PokeExpansion
        src/include/pokes.h
        src/defines.h
        src/DexExpansion.c
        src/functions.h
        src/locations.h
        src/Saveblock.c
        src/structs.h
        src/types.h src/species_name.c src/base_stats.c src/dex.c src/graphics.c src/cry_table.c src/items_expansion.c
        src/BallsExpansion.c src/data/move_names.h)
