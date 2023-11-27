/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/


#ifndef PROJECT_H
    #define PROJECT_H

    // P R O J E C T  S T R U C T U R E S

        typedef struct game_s {
            char **_map;
            int _occurences;
        } game_t;

        #define N game->_map[row - 1][col]
        #define S game->_map[row + 1][col]
        #define NW game->_map[row - 1][col - 1]
        #define NE game->_map[row - 1][col + 1]
        #define W game->_map[row][col - 1]
        #define E game->_map[row][col + 1]
        #define SW game->_map[row + 1][col - 1]
        #define SE game->_map[row + 1][col + 1]

    //  P R O J E C T  F U N C T I O N S

        int errorHandler(project_t *project);

#endif /* !PROJECT_H */
