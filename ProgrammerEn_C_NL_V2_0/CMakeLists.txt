# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)

# Notre projet est étiqueté hello
project(ProgrammerEn_C_NL_V2_0)

# Crée des variables avec les fichiers à compiler
set(SRCS
    main.c
    
    )
    


# On indique que l'on veut un exécutable "hello" compilé à partir des fichiers décrits par les variables SRCS et HEADERS
add_executable(ProgrammerEn_C ${SRCS} ${HEADERS})