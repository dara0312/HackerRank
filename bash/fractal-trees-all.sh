#!/bin/bash

init_board() {
    row_num=63
    col_num=100

    for (( i = 0; i < row_num; i++ )); do
        for (( j = 0; j < col_num; j++ )); do
            board[$i,$j]="_"
        done
    done
}

print_board() {
    for (( i = 0; i < row_num; i++ )); do
        for (( j = 0; j < col_num; j++ )); do
            echo -n "${board[$i,$j]}"
        done
        echo
    done
}

iterate() {
    local n="$1"
    local size="$2"
    local row="$3"
    local col="$4"

    if [[ "$n" -eq 0 ]]; then
        return
    fi

    for (( i = row; i > row - size; i-- )); do
        board[$i,$col]="1"
    done

    for (( i = row - size; i > row - size * 2; i-- )); do
        board[$i,$((col - (row - size - i + 1)))]="1"
        board[$i,$((col + (row - size - i + 1)))]="1"
    done

    iterate $((n - 1)) $((size / 2)) $((row - size * 2)) $((col - size))
    iterate $((n - 1)) $((size / 2)) $((row - size * 2)) $((col + size))
}

main() {
    declare -A board

    init_board

    read N
    iterate $N 16 62 49

    print_board
}

main
